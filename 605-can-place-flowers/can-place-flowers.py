class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        for i in range(len(flowerbed)):
            if((flowerbed[i] == 0) and (i == 0 or flowerbed[i-1]==0) and (i == len(flowerbed)-1 or flowerbed[i+1] == 0)):
            
                flowerbed[i] = 1
                n -= 1
                i += 1
        if(n > 0):
            return False
        return True