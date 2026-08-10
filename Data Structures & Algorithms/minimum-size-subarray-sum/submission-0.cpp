class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int minlen = INT_MAX;
        int currsum = 0;
        
        for(int right = 0; right<nums.size(); right++){
            currsum += nums[right];

            while(currsum >= target){
                int length = right - left +1;
                minlen = min(length, minlen);
                currsum -= nums[left];
                left++;
            }
        }

        return (minlen == INT_MAX) ? 0: minlen;
    }
};