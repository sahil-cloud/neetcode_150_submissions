class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l=1;
        int r=-1;
        for(auto it:piles){
            r = max(r,it);
        }
        int mini = r;
        while(l<=r){
            int mid = l + (r-l)/2;
            int cnt = 0;
            for(auto it:piles){
                cnt += ceil((double)it/mid);
            }
            if(cnt > h) l = mid+1;
            else{
                mini = min(mini,mid);
                r = mid-1;
            }
        }
        return mini;
    }
};
