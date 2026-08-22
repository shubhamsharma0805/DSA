class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int rem;
        int temp = n;
        while( temp != 0){
            rem = temp % 10;
            sum += rem;
            prod *= rem;
            temp /= 10;       
        }
        int total = sum + prod;
       
       return n % total == 0;
    }
};