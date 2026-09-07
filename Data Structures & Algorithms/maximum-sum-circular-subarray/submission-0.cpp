class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMax = nums[0];
        int maxi = nums[0];

        int currMin = nums[0];
        int mini = nums[0];

        int totalSum = nums[0];

        for(int i=1; i<nums.size(); i++){

            totalSum += nums[i];

            currMax = max(nums[i], currMax + nums[i]);
            maxi = max(maxi , currMax);

            currMin = min(nums[i], currMin + nums[i]);
            mini = min(mini , currMin);
        }

        if(totalSum == mini) return maxi;

        return max(maxi, totalSum-mini);
    }
};