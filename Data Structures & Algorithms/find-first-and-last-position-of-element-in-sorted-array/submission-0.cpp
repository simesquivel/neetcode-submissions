class Solution {
public:
    int firstOccur(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;

        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid] == target){
                ans = mid;
                e = mid-1;
            }
            else if(nums[mid] > target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }

    int lastOccur(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;

        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid] == target){
                ans = mid;
                s = mid+1;
            }
            else if(nums[mid] > target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        int a = firstOccur(nums, target);
        int b = lastOccur(nums, target);

        if(a != -1 && b != -1){
            return {a, b};
        }
        else{
            return {-1, -1};
        }
    }
};