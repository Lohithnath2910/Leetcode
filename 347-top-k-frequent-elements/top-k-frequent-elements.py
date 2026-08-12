class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        d = {}
        for i in nums:
            if i not in d:
                d[i] = 1
            else:
                d[i] += 1
        
        h = []
        heapq.heapify_max(h)
        for i in d:
            heapq.heappush_max(h,(d[i],i))
        
        ans = []
        for i in range(k):
            ans.append(heapq.heappop_max(h)[1])
        return ans