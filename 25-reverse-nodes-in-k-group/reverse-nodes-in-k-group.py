# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: ListNode | None, k: int) -> ListNode | None:
        if k == 1:
            return head

        h = head
        pg_tail = None
        new_head = None
        
        while(h is not None):
            if not self.r(h,k):
                break
            gh = h
            t = h
            prev = None

            for i in range(k):
                curr = t
                t = t.next
                curr.next = prev
                prev = curr

            if new_head is None:
                new_head = prev
            
            if pg_tail is not None:
                pg_tail.next = prev

            gh.next = t
            pg_tail = gh
            h = t
        
        if new_head is None:
            return head


        return new_head
    
    def r(self,h,k):
        temp = h
        while k > 0 and temp is not None:
            temp = temp.next
            k -= 1
        
        return k == 0
            