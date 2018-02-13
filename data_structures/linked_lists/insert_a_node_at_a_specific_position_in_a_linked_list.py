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
#This is a "method-only" submission.
#You only need to complete this method.
def InsertNth(head, data, position):
    new_node = Node(data,next_node=None)
    # specific behavior when linked list is empty
    if head is None:
        return new_node
    # or head is not None and position is 0
    elif position == 0:
        new_node.next = head
        return new_node
    # otherwise
    current_position = 0
    current_node = head
    while current_node is not None:
        if (current_position + 1) == position:
            new_node.next = current_node.next
            current_node.next = new_node
            return head
        current_node = current_node.next
        current_position += 1