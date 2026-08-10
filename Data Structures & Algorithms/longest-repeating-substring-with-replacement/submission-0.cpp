class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        int maxf = 0;

        vector<int> count(26,0);

        while(right<s.size()){
            count[s[right] - 'A']++;
            maxf = max(maxf, count[s[right] - 'A']);

            if((right-left+1)-maxf > k){  //most important
                count[s[left] - 'A']--;
                left++;
            }

            maxlen = max(maxlen, right-left+1);
            right++;
        }

        return maxlen;
    }
};
