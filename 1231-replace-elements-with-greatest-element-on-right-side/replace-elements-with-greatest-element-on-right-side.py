class Solution(object):
    def replaceElements(self, arr):
        i = len(arr) - 2
        j = len(arr) - 1
        main = list(arr)
        max1 = arr[j]
        while(i >= 0):
            main[i] = max1
            i -= 1
            j -= 1
            max1 = max(max1,arr[j])
        main[-1] = -1
        return main

        