class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN;

        // for(int i=0; i<height.size(); i++){
        //     for(int j = i+1; j<height.size(); j++){
        //         int currA = min(height[i], height[j]) * (j - i);
        //         ans = max(ans, currA);
        //     }
        // }

        // return ans;

        int s = 0;
        int e = heights.size()-1;

        while(s<e){
            int currA = min(heights[s], heights[e]) * (e-s);
            ans = max(ans, currA);

            if(heights[s]< heights[e]){
                s++;
            }
            else{
                e--;
            }
        }
        return ans;
    }
};
