class Solution {
public:
    static bool comp(pair<int,int> &a, pair<int,int> &b){
        return a.second>b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int>ans;

        unordered_map<int, int> mp;

        for(int i =0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<pair<int,int>> freq;

        for(auto it: mp){
            freq.push_back({it.first, it.second});
        }

        sort(freq.begin(), freq.end(), comp);

        for(int i=0; i<k; i++){
            ans.push_back(freq[i].first);
        }

        return ans;

    }
};
