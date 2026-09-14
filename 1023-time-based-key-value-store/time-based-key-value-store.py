class TimeMap:

    def __init__(self):
        self.d = {}

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key not in self.d:
            self.d[key] = []
        self.d[key].append([value,timestamp])

    def get(self, key: str, timestamp: int) -> str:
        res = ""
        v = self.d.get(key, [])
        l = 0
        r = len(v) -1

        while(l <= r):
            m = (l+r) // 2
            if v[m][1] <= timestamp:
                l = m + 1
                res = v[m][0]
            else:
                r = m - 1
        return res


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)