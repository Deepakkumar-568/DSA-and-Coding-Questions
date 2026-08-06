class Solution {
    public:
    int whileLoop(int d) {
        // Your code goes her
        int sum = 0;
        int count = 0 ;
        int num = d;
            while(count < 50){
                if(num > 0){
                    sum = sum + num;
                    count ++;
                }
                num = num +10;
            }
            return sum;
        }
};