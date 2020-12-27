n=int(input())
l=[]
if(n==3 or n==2):
    print("NO SOLUTION")
else:
    if(n%2!=0):
        print(n,end=" ")
    for i in range(2,n+1,2):
        if(abs((i-1)-i)==1):
            print((i),end=" ")
            l.append((i-1))
    for i in l:
        print(i,end=" ")

