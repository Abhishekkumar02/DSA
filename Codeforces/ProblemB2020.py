def music(a,n):
    mp=dict()
    for i in range(n):
        if a[i] in mp.keys():
            mp[a[i]]+=1
        else:
            mp[a[i]]=1
    count = 0
    l=list(mp.keys())[-1]
    for it in mp:
        if mp[it]>1 and (it+1) not in mp.keys():
            count+=1
        
        elif(mp[it]>1 and (it+1) in mp.keys()):
            mp[it+1]+=1
    length = len(mp)
    if count>0:
        return (length+count)
    return length


t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    print(music(a,n))
	
