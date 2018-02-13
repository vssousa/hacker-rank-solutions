"""
 Merge two linked lists
 head could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 return back the head of the linked list in the below method.
"""
def MergeLists(headA, headB):
    merge_head = None
    current_node = None
    while headA or headB:
        # evaluate data in the linked lists
        if not headB or (headA and headB and headA.data <= headB.data):
            current_head = Node(data=headA.data)
            headA = headA.next
        else:
            current_head = Node(data=headB.data)
            headB = headB.next
        
        # update the head in the merge list
        if not merge_head:
            merge_head = current_head
        
        # create links on the merge list
        if current_node:
            current_node.next = current_head
        current_node = current_head
        
    return merge_head