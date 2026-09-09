class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        p = 0
        c = prices[0]

        for i in range(1,len(prices)):
            if p < prices[i] - c:
                p = prices[i] - c

            if c > prices[i]:
                c = prices[i]

        return p