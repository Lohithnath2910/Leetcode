# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        h = ListNode()
        t = h
        a = 0
        k = len(lists)

        while(True):
            v = float('inf')
            a = 0
            n = -1
            for i in range(len(lists)):
                if lists[i] is None:
                    a += 1
                    continue
                
                if v > lists[i].val:
                    v = lists[i].val
                    n = i
            
            if a == k:
                break
                
            lists[n] = lists[n].next
                   

            t.next = ListNode(v)
            t = t.next


            
        return h.next