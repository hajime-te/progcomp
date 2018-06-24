n,k=map(int,input().split())
a=list(map(int,input().split()))
n-=k
ans=1

while n>0:
    n-=(k-1)
    ans+=1

print(ans)
