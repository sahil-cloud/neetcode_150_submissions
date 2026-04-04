class Solution {
public:
    int maxArea(vector<int>& arr) {
        int maxi = -1;
        int n = arr.size();
        int i = 0,j=n-1;
        while(i<j){
            int ht = min(arr[i],arr[j]);
            int dis = abs(j-i);
            int area = ht*dis;
            maxi = max(maxi,area);
            if(arr[i]<=arr[j]) i++;
            else j--;
        }
        return maxi;
    }
};
