n=int(input())
p=[0]
p.extend(list(map(int,input().split())))
dp=[0]*10010
dp[0]=1

for i in range(1,n+1):
    for j in range(10000,-1,-1):
        if dp[j]==1:
            dp[j+p[i]]=1

print(sum(dp))


