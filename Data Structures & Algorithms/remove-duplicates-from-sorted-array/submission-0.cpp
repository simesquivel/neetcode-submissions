class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;

        for(int i =0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]){
                ans.pop_back();
            }
            ans.push_back(nums[i]);
        }

        for(int i = 0; i<ans.size(); i++){
            nums[i] = ans[i];
        }

        return ans.size();
    }
};