n=int(input())
l=list(map(int,input().split()))
ans=0
for ll in l:
    while ll%2==0:
        ans+=1
        ll/=2
print(ans)
