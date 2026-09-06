class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;

        for(auto c: t){
            mp[c]++;  
        }

        int left = 0;
        int right = 0;
        int cnt = 0;
        int sidx = -1;
        int minlen = INT_MAX;

        while(right < s.size()){
            if(mp[s[right]] > 0) cnt++;
            mp[s[right]]--;

            while(cnt == t.size()){
                if(right - left +1 < minlen){
                    minlen = right-left+1;
                    sidx = left;
                }
                //start reducing the window
                mp[s[left]]++;
                if(mp[s[left]] > 0) cnt--;
                left++;
            }
            right++;
        }

        return (sidx == -1) ? "" : s.substr(sidx, minlen);
    }
};
