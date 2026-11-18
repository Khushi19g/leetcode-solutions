class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            totalSum = totalSum + nums[i];
        }
        int leftSum = 0;
        for (int i = 0; i < n; i++) {
            int rightSum = totalSum - nums[i] - leftSum;
            if (rightSum == leftSum) {
                return i;
            } else {
                leftSum += nums[i];
            }
        }
        return -1;
    }
};