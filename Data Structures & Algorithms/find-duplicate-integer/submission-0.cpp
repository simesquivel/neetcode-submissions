class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int x: nums){
            mp[x]++;
        }
        int ans;
        for(auto m: mp){
            if(m.second > 1){
                ans = m.first;
            }
        }

        return ans;
    }
};
