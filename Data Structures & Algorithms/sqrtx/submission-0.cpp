class Solution {
public:
    int mySqrt(int x) {
        int low = 1, high = x/2;
        int ans = 1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid < x){
                ans = max(ans,mid);
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans;
    }
};