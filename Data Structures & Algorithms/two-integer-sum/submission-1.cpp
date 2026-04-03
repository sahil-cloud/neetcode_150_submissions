class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<pair<int,int> > nums;
        for(int i=0;i<arr.size();i++) nums.push_back({arr[i],i});
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            int val = nums[i].first + nums[j].first;
            if(val == target) return {nums[i].second,nums[j].second};
            else if(val < target) i++;
            else j--;
        }
        return {nums[i].second,nums[j].second};
    }
};
