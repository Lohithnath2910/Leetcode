class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:

        res = []
        q = deque()

        for i in range(len(nums)):
            while(len(q) != 0 and q[0] <= i - k):
                q.popleft()
            
            
            while(len(q) != 0 and nums[q[-1]] < nums[i]):
                q.pop()
            

            q.append(i)
            
            if i >= k - 1:
                res.append(nums[q[0]])
            

        return res