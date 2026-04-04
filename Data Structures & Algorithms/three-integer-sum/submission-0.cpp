class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int> > ans;
        set<string> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int k = i+1 , j=n-1;
            while(k<j){
                int val = nums[i] + nums[k] + nums[j];
                if(val == 0){
                    string tmp = to_string(nums[i]) + to_string(nums[j]) + to_string(nums[k]);
                    if(st.find(tmp) == st.end())
                    {ans.push_back({nums[i],nums[k],nums[j]}); st.insert(tmp); }
                    k++;j--;
                }
                else if(val < 0) k++;
                else j--;
            }
        }
        return ans;
    }
};
