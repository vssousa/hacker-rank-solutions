if __name__ == '__main__':
    n = int(raw_input())
    if(n>0):
        odd = n % 2
        if(odd or ((not odd) and n >= 6 and n <= 20)):
            print "Weird"
        elif((not odd) and ((n >= 2 and n <= 5) or (n > 20))):
            print "Not Weird"