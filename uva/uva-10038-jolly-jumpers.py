while True:
    try:
        row = list(map(int, input().split(" ")))
    except:
        break        
    
    n, nums = row[0], row[1:]    
    is_jolly = True
    bit_vec = [False for _ in range(4096)]
    
    for i in range(1, len(nums)):
        c = abs(nums[i] - nums[i-1])
        if (c != 0 and c < n and not bit_vec[c]):
            bit_vec[c] = True
        else:
            is_jolly = False
        #end if
    #end for
    
    if (is_jolly):
        print("Jolly")        
    else:
        print("Not jolly")
        
#end while    
