class MinStack:

    def __init__(self):
        self.s = []
        self.ms = []

    def push(self, value: int) -> None:
        x = value
        if len(self.ms) == 0 or (len(self.ms) > 0 and x <= self.ms[-1]):
            self.ms.append(x)
        self.s.append(x)

    def pop(self) -> None:
        if len(self.ms) > 0 and len(self.s) > 0 and self.ms[-1] == self.s[-1]:
            self.ms.pop()
        self.s.pop()
        

    def top(self) -> int:
        if len(self.s) > 0:
           return self.s[-1] 
        return None


    def getMin(self) -> int:
        if len(self.ms) > 0:
           return self.ms[-1] 
        return self.s[-1]

# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(value)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()