"""
 Delete duplicate nodes
 head could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 return back the head of the linked list in the below method.
"""

def RemoveDuplicates(head):
    current_node = head
    while current_node:
        next_node = current_node.next
        if next_node and current_node and next_node.data == current_node.data:
            current_node.next = next_node.next
        else:
            current_node = next_node
    return head 