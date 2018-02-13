"""
 Insert Node at the end of a linked list 
 head pointer input could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node
 
 return back the head of the linked list in the below method
"""

def Insert(head, data):
    new_node = Node(data,next_node=None)
    # specific behavior when linked list is empty
    if head is None:
        return new_node
    # otherwise
    new_node.next = head
    # new node is the new head
    return new_node 