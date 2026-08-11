class Solution {
public:
     int atmost(vector<int> &nums, int k){
        if(k<0) return 0;
        int ans = 0;
        int sum = 0;
        int le=0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            while(sum > k){
                sum -= nums[le];
                le++;
            }
            ans += (i - le + 1);
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return  atmost(nums,goal) - atmost(nums,goal-1);
    }
};