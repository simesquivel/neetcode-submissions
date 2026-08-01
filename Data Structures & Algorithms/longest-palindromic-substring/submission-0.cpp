class Solution {
public:
    bool isPalin(string &s, int l, int r){
        while(l < r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        string ans = "";

        for(int i= 0; i<s.size(); i++){
            for(int j = i; j<s.size(); j++){
                if(isPalin(s, i, j)){
                    string t = s.substr(i, j-i+1);
                    ans = t.size() > ans.size() ? t : ans;
                }
            }
        }

        return ans;
    }
};
