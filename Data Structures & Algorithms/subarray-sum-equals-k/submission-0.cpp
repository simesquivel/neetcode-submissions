class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> sumCnt;
        int cnt = 0;
        int sum = 0;

        sumCnt[0]++;

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];

            if(sumCnt.find(sum-k) != sumCnt.end()){
                cnt += sumCnt[sum-k];
            }

            sumCnt[sum]++;
        }

        return cnt;
    }
};