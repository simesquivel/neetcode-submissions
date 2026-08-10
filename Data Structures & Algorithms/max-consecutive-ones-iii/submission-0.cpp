class Solution {
public:
    int longestOnes(vector<int>& s, int k) {
         int left = 0;
        int right = 0;
        int maxlen = 0;
        int zeroC = 0;

        while(right<s.size()){
            if(s[right] == 0) zeroC++;

            while(zeroC > k){  //most important
                if(s[left] == 0) zeroC--;
                left++;
            }

            maxlen = max(maxlen, right-left+1);
            right++;
        }

        return maxlen;
    }
};