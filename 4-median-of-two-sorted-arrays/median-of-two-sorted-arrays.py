class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        if len(nums1) > len(nums2):
            return self.findMedianSortedArrays(nums2,nums1)

        x = len(nums1)
        y = len(nums2)

        s = 0
        e = x

        while(s <= e):
            parx = (s+e) // 2
            pary = (x + y + 1) // 2 - parx

            x1 = float("-inf") if parx == 0 else nums1[parx-1]
            x2 = float("inf") if parx == x else nums1[parx]
            y1 = float("-inf") if pary == 0 else nums2[pary-1]
            y2 = float("inf") if pary == y else nums2[pary]

            if (x1 <= y2 and y1 <= x2):
                if (x+y) % 2 == 0:
                    return (max(x1,y1) + min(x2,y2)) / 2

                else:
                    return max(x1,y1)
            elif x1 > y2:
                e = parx - 1
            
            else:
                s = parx + 1
        return 0