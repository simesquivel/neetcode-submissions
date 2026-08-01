class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(auto st: strs){
            string stri = st;
            sort(stri.begin(), stri.end());
            mp[stri].push_back(st);
        }

        vector<vector<string>> ans;

        for(auto m: mp){
            ans.push_back(m.second);
        }

        return ans;
    }
};
