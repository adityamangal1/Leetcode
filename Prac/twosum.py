ls = [2, 7, 11, 15]
target = 9
for i in range(len(ls)):
    for j in range(i+1,len(ls)):
        if ls[i] + ls[j] == target:
            print(i, j)

    
    
