class Solution {
public:
    void merge(vector<int> &nums,int low,int mid,int high){
        vector<int> arr;
        int left = low,right=mid+1;
        while(left<=mid && right<=high){
            if(nums[left] <= nums[right]){
                arr.push_back(nums[left]);
                left++;
            }else {arr.push_back(nums[right]); right++;}
        }
        while(left<=mid){
            arr.push_back(nums[left]);
            left++;
        }
        while(right<=high){
           arr.push_back(nums[right]); right++; 
        }
        for(int i=low;i<=high;i++){
            nums[i] = arr[i-low];
        }
    }
    void mergesort(vector<int> &nums,int low,int high){
        if(low >= high) return;
        int mid = low + (high-low)/2;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};