class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        st = []

        for i in range(len(speed)):
            st.append([position[i], (target - position[i]) / speed[i]])
        
        st.sort(key=lambda x: x[0], reverse=True)

        count = 0
        t = 0
        for i in st:
            if i[1] > t:
                count += 1
                t = i[1]
        return count