class Solution(object):
    def countSeniors(self, details):
        count = 0
        for i in range(len(details)):
            temp = list(details[i])
            num = 10*(int(temp[-4])) + (int(temp[-3]))
            print(num)
            if(num > 60):
                count += 1
        return count

        