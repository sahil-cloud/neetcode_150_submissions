class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            int val = nums[i] + nums[j];
            if(val == target) return {i,j};
            else if(val < target) i++;
            else j--;
        }
        return {i,j};
    }
};
