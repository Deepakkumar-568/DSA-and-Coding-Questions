#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void traverse(struct Node* head) {
    struct Node* temp = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

struct Node* insertBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
    return head;
}


struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);

    if (head == NULL)
        return newNode;

    struct Node* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

struct Node* insertAfter(struct Node* head, int key, int data) {
    struct Node* temp = head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL) {
        printf("Value %d not found.\n", key);
        return head;
    }

    struct Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

struct Node* deleteBeginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    struct Node* temp = head;
    head = head->next;
    free(temp);

    return head;
}


struct Node* deleteEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node* temp = head;

    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;

    return head;
}


struct Node* deleteValue(struct Node* head, int key) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    if (head->data == key) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node* temp = head;

    while (temp->next != NULL && temp->next->data != key)
        temp = temp->next;

    if (temp->next == NULL) {
        printf("Value %d not found.\n", key);
        return head;
    }

    struct Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);

    return head;
}

int search(struct Node* head, int key) {
    struct Node* temp = head;

    while (temp != NULL) {
        if (temp->data == key)
            return 1;

        temp = temp->next;
    }

    return 0;
}


void freeList(struct Node* head) {
    struct Node* temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}


int main() {
    struct Node* head = NULL;
    int n, data, key;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        head = insertEnd(head, data);
    }

    printf("\nInitial Linked List:\n");
    traverse(head);

    printf("\nEnter value to insert at beginning: ");
    scanf("%d", &data);
    head = insertBeginning(head, data);
    traverse(head);

    printf("\nEnter value to insert at end: ");
    scanf("%d", &data);
    head = insertEnd(head, data);
    traverse(head);

    printf("\nEnter value after which you want to insert: ");
    scanf("%d", &key);

    printf("Enter new value: ");
    scanf("%d", &data);

    head = insertAfter(head, key, data);
    traverse(head);

    printf("\nEnter value to search: ");
    scanf("%d", &key);

    if (search(head, key))
        printf("%d is present in the linked list.\n", key);
    else
        printf("%d is not present in the linked list.\n", key);

    printf("\nEnter value to delete: ");
    scanf("%d", &key);

    head = deleteValue(head, key);
    traverse(head);

    freeList(head);

    return 0;
}