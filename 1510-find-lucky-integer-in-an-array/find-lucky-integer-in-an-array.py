class Solution(object):
    def findLucky(self, arr):
        key = dict.fromkeys(arr,0)
        for i in arr:
            key[i] += 1
        check = 0
        for i in key:
            if(key[i] == i):
                check = max(i,check)
        
        print(key)

        if(check == 0):
            return -1
        else:
            return check

        