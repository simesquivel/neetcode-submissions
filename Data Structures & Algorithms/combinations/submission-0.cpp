class Solution {
public:
    void combHelper(int n, int k, vector<vector<int>> &result, vector<int>&curr, int start){
        

        if(k == 0){
            result.push_back(curr);
            return;
        }

        if(start > n) return;

        for(int i= start; i<=n; i++){
            curr.push_back(i);
            combHelper(n, k-1, result, curr, i+1);
            curr.pop_back();
        }

    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> curr;

        combHelper(n, k, result, curr, 1);

        return result;
    }
};