class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> modCnt;

        int cnt = 0;
        int sum = 0;
        modCnt[0]++;

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];

            int mod = sum%k;

            if(mod < 0) mod+=k;

            if(modCnt.find(mod) != modCnt.end()){
                cnt += modCnt[mod];
                modCnt[mod]++;
            }
            else{
                modCnt[mod]++;
            }
        }
        return cnt;
    }
};