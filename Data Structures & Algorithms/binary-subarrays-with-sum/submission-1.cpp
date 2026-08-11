class Solution {
public:
    int atMostk(vector<int>& nums, int goal){
        if (goal < 0) {
            return 0;
        }

        int left = 0;
        int sum = 0;
        int subarr = 0;

        for(int right = 0; right<nums.size(); right++){
            sum += nums[right];

            while(sum > goal){
                sum -= nums[left];
                left++;
            }
            
            subarr += right-left+1;
           
        }
        return subarr;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
         return (atMostk(nums, goal) - atMostk(nums, goal - 1));
    }
};