nums = [725, 479, 359, 963, 465, 706, 146, 282, 828, 962]

k = 2

try:
    a = sorted(nums)
    b = []
    while(k!=0):
        c = max(a)
        b.append(c)
        a.pop()
        k-=1
except:
    pass
    
print(sorted(b))


    

