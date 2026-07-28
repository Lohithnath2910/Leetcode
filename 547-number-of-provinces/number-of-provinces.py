class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        vis = [False]*len(isConnected)
        co = 0

        def bf(i):
            q = deque()
            q.append(i)

            while q:
                n = q.popleft()
                if vis[n] == False:
                    vis[n] = True
                    for i in range(len(isConnected[0])):
                        if n == i:
                            continue
                        elif isConnected[n][i] == 1:
                            q.append(i)
                

        for i in range(len(isConnected)):
            if vis[i] == False:
                co += 1
                bf(i) 

        return co