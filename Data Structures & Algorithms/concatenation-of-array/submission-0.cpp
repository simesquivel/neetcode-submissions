class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> finalAns;
        
        for(int i=0; i<nums.size(); i++){
            finalAns.push_back(nums[i]);
        }

         
        for(int i=0; i<nums.size(); i++){
            finalAns.push_back(nums[i]);
        }
        return finalAns;
    }
};