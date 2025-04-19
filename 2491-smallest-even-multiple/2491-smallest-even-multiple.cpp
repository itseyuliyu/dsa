class Solution {
public:
    int smallestEvenMultiple(int num) {
        return (num % 2 == 0) ? num : num * 2;
    }
};
