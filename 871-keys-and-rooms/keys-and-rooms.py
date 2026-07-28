class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        n = len(rooms)
        v = [False]*n

        def bf(i):
            q = deque()
            q.append(i)
            v[i] = True

            while q:
                no = q.popleft()
                for k in rooms[no]:
                    if v[k] == False:
                        v[k] = True
                        q.append(k)
                
        bf(0)
        
        for i in range(len(v)):
            if v[i] == False:
                return False
            
        return True