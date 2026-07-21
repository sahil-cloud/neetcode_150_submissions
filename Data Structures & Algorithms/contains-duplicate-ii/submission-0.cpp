class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,pair<bool,int> > mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(mp[nums[i]].first){
                if( abs(mp[nums[i]].second - i ) <=k ) return true;
                mp[nums[i]] = {true,i};
            }else{
                mp[nums[i]] = {true,i};
            }
        }
        return false;
    }
};