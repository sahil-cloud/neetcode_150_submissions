class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int n = nums.size();
        int m = nums[0].size();
        int l=0,r=m*n-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            int x = mid%n;
            int y = mid/n;
            if(nums[x][y] == target) return true;
            else if(nums[x][y] < target) l++;
            else r--;
        }
        return false;
    }
};
