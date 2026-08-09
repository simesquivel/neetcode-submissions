class Solution {
public:
    bool checkInclusion(string p, string s) {
        vector<int> window(26, 0);
        vector<int> need(26, 0);

        for(char x: p){
            need[x - 'a']++;
        }

        int left = 0;

        for(int right=0; right<s.size(); right++){
            window[s[right] - 'a']++;

            if(right-left+1 > p.size()){
                window[s[left] - 'a']--;
                left++;
            }

            if(right-left+1 == p.size() && window == need){
                return true;

            }
        }

        return false;
    }
};
