class Solution {
public:
    void permHelper(vector<int> &nums, vector<vector<int>> &result, int start){
        if(start == nums.size()){
            result.push_back(nums);
            return;
        }

        for(int i=start; i<nums.size(); i++){
            swap(nums[i], nums[start]);
            permHelper(nums, result, start+1);
            swap(nums[i], nums[start]);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;

        permHelper(nums, result, 0);

        return result;
    }
};
