class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, product=1;
        while(n != 0) {
            int x = n%10;
            n /= 10;
            sum += x;
            product *= x;
        }
        return product-sum;
    }
};