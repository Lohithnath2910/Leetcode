class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        k = {}

        for i, j in enumerate(numbers):
            co = target - j

            if co in k:
                return [k[co],i+1]
            
            k[j] = i+1
        
        return []