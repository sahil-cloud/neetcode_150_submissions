class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return n;
        sort(nums.begin(),nums.end());
        int lcs = 1;
        int pv = nums[0];
        int curr = 1;
        for(int i=1;i<n;i++){
            if(nums[i] == pv+1){
                
                pv = nums[i];
                curr += 1;
            }else if(nums[i] == pv){
                // cout<<pv<<endl;
                continue;
            }
            else{
                // cout<<pv<<endl;
                lcs = max(curr,lcs);
                pv = curr;
            }
        }
        lcs = max(curr,lcs);
        return lcs;
    }
};
