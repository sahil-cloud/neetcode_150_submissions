class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cntZeroes = 0;
        int pro = 1;
        int n = nums.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            int a = nums[i];
            if(a==0){
                cntZeroes++;
                if(cntZeroes > 1){
                    return ans;
                }
                continue;
            }
            pro *= a;
        }
        for(int i=0;i<n;i++){
            int a = nums[i];
            if(a==0) ans[i] = pro;
            else if(cntZeroes > 0) ans[i] = 0;
            else ans[i] = pro/a;
        }
        return ans;

    }
};
