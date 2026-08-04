#include <stdio.h>

int main() {

    int size;
    int menu;
    int sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements are:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nMenu\n");
    printf("1. Sum of Even Numbers\n");
    printf("2. Sum of Odd Numbers\n");
    printf("3. Sum of Prime Numbers\n");

    printf("Enter your choice: ");
    scanf("%d", &menu);

    switch(menu) {

        case 1:
            sum = 0;
            for(int i = 0; i < size; i++) {
                if(arr[i] % 2 == 0) {
                    sum += arr[i];
                }
            }
            printf("Sum of even numbers = %d\n", sum);
            break;

        case 2:
            sum = 0;
            for(int i = 0; i < size; i++) {
                if(arr[i] % 2 != 0) {
                    sum += arr[i];
                }
            }
            printf("Sum of odd numbers = %d\n", sum);
            break;

        case 3:
            sum = 0;

            for(int i = 0; i < size; i++) {
                int count = 0;

                for(int j = 1; j <= arr[i]; j++) {
                    if(arr[i] % j == 0) {
                        count++;
                    }
                }

                if(count == 2) {
                    sum += arr[i];
                }
            }

            printf("Sum of prime numbers = %d\n", sum);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}



    
    
