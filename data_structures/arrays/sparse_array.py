def find_occurrences(query,strs):
    occurrences = 0
    for content in strs:
        if query == content: occurrences += 1
    return occurrences
    
def run_queries(strs,queries):
    for query in queries:
        print str(find_occurrences(query,strs))

# input strings
n = int(raw_input())
strs = [raw_input().strip() for current_n in range(n)]
# queries
q = int(raw_input())
queries = [raw_input().strip() for current_q in range(q)]
# run queries
run_queries(strs,queries)