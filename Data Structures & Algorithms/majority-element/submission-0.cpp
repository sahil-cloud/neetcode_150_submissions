class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int me = nums[0],mec=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] != me) mec--;
            if(mec == 0) {me = nums[i]; mec = 1;}
        }
        return me;
    }
};