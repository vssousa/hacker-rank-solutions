"""
 Print elements of a linked list in reverse order as standard output
 head could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 
"""

def ReversePrint(head):
    # if we have an empty list
    if head is None:
        return
    # otherwise
    reverse_list_string = head.data
    current_node = head.next
    while current_node is not None:
        reverse_list_string = "%s\n%s" % (current_node.data, reverse_list_string) 
        current_node = current_node.next
    print reverse_list_string
        
    

  
  
  
  
