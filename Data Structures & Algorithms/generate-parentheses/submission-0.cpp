class Solution {
public:
    void solve(string output, int O, int C, int n, vector<string>& ans){
        if( O + C == 2*n){
            ans.push_back(output);
            return;
        }

        if(O < n){
            solve(output + "(", O+1, C, n, ans);
        }

        if(C < O){
            solve(output + ")", O, C+1, n, ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        solve("", 0, 0, n, ans);

        return ans;
    }
};
