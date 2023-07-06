class Solution {
public:
    int maxProfit(vector<int>& prices) {

      int profit=0, mini=prices[0];

      int n= prices.size();  

       for(int i=1;i<n;i++){

           int sell= prices[i]-mini;

           profit= max(profit,sell);

           mini= min(mini,prices[i]);
           
       } 
        return profit;
    }
};
