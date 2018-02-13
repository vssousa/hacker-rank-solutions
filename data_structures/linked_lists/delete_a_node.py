"""
 Delete Node at a given position in a linked list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 return back the head of the linked list in the below method. 
"""

def Delete(head, position):
    # remove at the first position
    if position == 0:
        return head.next    
    # get the node of the provided position
    # and its previous node
    current_position = 1
    previous_node = head
    current_node = head.next
    while current_position != position:
        current_position += 1
        previous_node = current_node
        current_node = current_node.next
    # update linked list
    previous_node.next = current_node.next
    return head
    
  
  
  
  
  
  
