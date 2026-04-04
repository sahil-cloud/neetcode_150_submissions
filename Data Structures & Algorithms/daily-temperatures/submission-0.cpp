class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,0);
        stack<pair<int,int> > st;
        st.push({arr[n-1],1});
        for(int i=n-2;i>=0;i--){
            int tmp = arr[i];
            int cnt = 1;
            while(!st.empty() && st.top().first<=tmp){
                cnt+=st.top().second;
                st.pop();
            }
            if(!st.empty()){
                ans[i] = cnt;
            }
            st.push({arr[i],cnt});
        }
        return ans;
    }
};
