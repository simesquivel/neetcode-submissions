class Solution {
public:
    void comSumHelper( vector<int> &nums, int target, vector<vector<int>> &result, vector<int> &curr, int start){
        if(target == 0){
            result.push_back(curr);
            return;
        }

        if(target < 0) return;


        for(int i=start; i<nums.size(); i++){
            curr.push_back(nums[i]);
            comSumHelper(nums, target - nums[i], result, curr, i);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> curr;

        comSumHelper(nums, target, result, curr, 0);

        return result;
    }
};
