class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=n-1;
        for(int k=0;k<n && k<=j;k++){
            if(nums[k] == 0){
                swap(nums[k],nums[i]);
                i++;
            }else if(nums[k] == 1){
                continue;
            }else{
                swap(nums[k],nums[j]);
                j--;
            }
        }
    }
};