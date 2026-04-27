class Solution {
public:
    int findMin(vector<int> &arr) {
        int n = arr.size();
        int l=0,r=n-1;
        int mini = arr[0];
        while(l<r){
            int mid = l + (r-l)/2;
            if(arr[mid] >= arr[l] && arr[mid] <= arr[r]){
                mini = min({mini,arr[mid],arr[l]});
                r=mid-1;
            }else if(arr[mid] <= arr[l] && arr[mid] <= arr[r]){
                mini = min(mini,arr[mid]);
                r=mid-1;
            }else if(arr[mid] >= arr[l] && arr[mid] >= arr[r]){
                mini = min({arr[l],arr[r],mini});
                l = mid+1;
            }
        }
        return mini;
    }
};
