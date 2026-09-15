# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        n1 = 0
        k1 = 1

        while l1:
            n1 += l1.val*k1
            k1 *= 10
            l1 = l1.next

        n2 = 0
        k2 = 1
        while l2:
            n2 += l2.val*k2
            k2 *= 10
            l2 = l2.next
        
        an = n1 + n2
        h = ListNode()
        temp = ListNode(an % 10)
        an //= 10
        h.next = temp

        while an != 0:
            c = an % 10
            an //= 10
            temp.next = ListNode(c)
            temp = temp.next

        
        return h.next