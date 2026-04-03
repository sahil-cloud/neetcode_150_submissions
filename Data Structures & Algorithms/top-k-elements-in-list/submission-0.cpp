class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> mp(2002,0);
        for(auto it:nums){
            mp[it+1000]++;
        }
        priority_queue<pair<int,int> > pq;
        for(auto it=0;it<2002;it++){
            if(mp[it]>0){
                pq.push({mp[it],it-1000});
            }
        }
        vector<int> ans;
        while(!pq.empty()){
            auto it = pq.top(); pq.pop();
            ans.push_back(it.second);
            if(ans.size() == k) break;
        }
        return ans;
    }
};
