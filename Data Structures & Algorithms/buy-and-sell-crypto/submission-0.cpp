class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int n = prices.size();
        int buy = prices[0];
        for(int i=1;i<n;i++){
            if(prices[i] > buy){
                maxi = max(maxi,prices[i]-buy);
            }
            buy = min(buy,prices[i]);
        }
        return maxi;
    }
};
