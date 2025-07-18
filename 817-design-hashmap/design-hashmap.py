class MyHashMap(object):

    def __init__(self):
        self.a = {}

    def put(self, key, value):
        self.a[key] = value
        

    def get(self, key):
        return self.a.get(key, -1)
        

    def remove(self, key):
        if key in self.a:
            del self.a[key]
        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)