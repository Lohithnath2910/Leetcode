class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        st = []
        mx = 0

        for i in range(len(heights) + 1):
            cur = 0
            if i != len(heights):
                cur = heights[i]
            
            while(st and cur < heights[st[-1]]):
                h = heights[st.pop()] 
                w = i
                if st:
                    w = i - st[-1] - 1
                mx = max(mx,h*w)
            st.append(i)
        return mx