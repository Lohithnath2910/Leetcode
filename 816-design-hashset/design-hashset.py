class MyHashSet(object):

    def __init__(self):
        self.mov = set([])

    def add(self, key):
        self.mov.add(key)
        

    def remove(self, key):
        self.mov.discard(key)
        

    def contains(self, key):
        if key not in self.mov:
            return False
        return True
        


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)