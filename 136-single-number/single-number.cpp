class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count == 1) {  // if the number occurs only once
                return nums[i];
            }
        }
        return -1;  // default return if no single number found
    }
};
