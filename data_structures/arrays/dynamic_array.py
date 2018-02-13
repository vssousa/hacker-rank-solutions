inputs = raw_input().split(" ") # get the first line of input arguments
n = int(inputs[0]) # number of sequences
q = int(inputs[1]) # number of queries
lastAnswer = 0 # it initializes last answer 
sequences = [[] for x in xrange(n)] # initialize the n sequences

for query_index in range(q):
    query = map(int, raw_input().split(" ")) # get queries

    sequence_index = (query[1] ^ lastAnswer) % n # get the sequence index
    if(query[0] == 1): # to handle the first type of query
        sequences[sequence_index] += [query[2]]
    elif(query[0] == 2): # to handle the second type of query
        sequence = sequences[sequence_index] # get the sequence
        element_index = query[2] % len(sequence) # get the element index in a sequence
        lastAnswer = sequence[element_index] # update the variable lastAnswer 
        print lastAnswer # print current lastAnswer
