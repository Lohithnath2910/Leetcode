class Solution {
    public int maxProfit(int[] prices) {
        int k1 = prices[0];
        int k2 = 0;

        for(int i = 1;i < prices.length;i++)
        {
            int curr = prices[i] - k1;

            if(curr > k2)
            {
                k2 = curr;
            }

            if(k1 > prices[i])
            {
                k1 = prices[i];
            }
        }
        return k2; 
    }
}