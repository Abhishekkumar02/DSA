import math
alllocations = [[1,2],[3,4],[1,-1]]
n = int(input())
l = len(alllocations)
h=[]
k=[]
for i in range(l):
    x = math.sqrt(alllocations[i][0]**2+alllocations[i][1]**2)
    print(x)
    k.append(x)
    h.append(x)
k.sort()
n1=[]
for i in k:
    n1.append(alllocations[h.index(i)])
print(n1[0:n])
