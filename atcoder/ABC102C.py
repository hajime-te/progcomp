import statistics
import math

n=int(input())
a=list(map(int,input().split()))
b=[a[i]-(i+1) for i in range(n)]
midb=statistics.median(sorted(b))
ans=0

for bb in b:
    ans+=math.fabs(bb-midb)
print(ans)
