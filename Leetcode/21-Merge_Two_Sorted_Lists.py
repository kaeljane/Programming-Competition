# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode() # Nó falso
        atual = dummy      # Ponteiro que vai "costurando" a nova lista

        while list1 is not None and list2 is not None:
            # Se o valor da lista 1 for menorm costuramos ele
            if list1.val < list2.val:
                atual.next = list1
                list1 = list1.next
            # Se o valor da lista 2 for menor ou igual costuramos ele
            else:
                atual.next = list2
                list2 = list2.next
            
            atual = atual.next # o ponteiro da resposta tem que andar

        if list1 is not None:
            atual.next = list1
        elif list2 is not None:
            atual.next = list2

        return dummy.next

