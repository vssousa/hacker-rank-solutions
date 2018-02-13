"""
 Reverse a linked list
 head could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 return back the head of the linked list in the below method.
"""

def Reverse(head):
    if not head:
        return None    
    node = None
    while head:
        next_node = node
        node = Node(data=head.data, next_node=next_node)
        head = head.next
    return node