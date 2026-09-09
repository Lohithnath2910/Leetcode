class Solution:
    def trap(self, height: List[int]) -> int:
        i = 0
        j = len(height) - 1
        tot = 0
        h1 = height[0]
        h2 = height[j]
        while(i < j):
            if height[i] < height[j]:
                h1 = max(h1, height[i])
                if h1 - height[i] > 0:
                    tot += h1 - height[i]
                i += 1
            else:
                h2 = max(h2,height[j])
                if h2 - height[j] > 0:
                    tot += h2 - height[j]
                j -= 1


        return tot