class Solution {
public:
    bool isPerfectSquare(int num) {
        int perFectSquare = sqrt(num);
        if(perFectSquare*perFectSquare == num)  return true;
        return false;
    }
};