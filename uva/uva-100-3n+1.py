while True:
    try:
        i, j = map(int, input().split(" "))
    except:
        break
        
    temp_i = i
    temp_j = j

    if i > j:
        j, i = i, j 
    max_cycle_len = 0

    while (i <= j):
        n = i
        cycle_len = 1
            
        while (n != 1):
            if (n % 2 == 1):
                n = 3 * n + 1
            else:
                n /= 2
            cycle_len += 1
        #end while
        max_cycle_len = max(cycle_len, max_cycle_len)
        i += 1
    #end while
    print("%d %d %d" %(temp_i, temp_j, max_cycle_len))
#end while