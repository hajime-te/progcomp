from functools import lru_cache


@lru_cache(maxsize=None)
def rec(k=0,tight=True,s=0):
    if s>d:
        return 0
    if k==len(n):
        return (s%d==0)

    x=int(n[k])
    r= x if tight else 9
    res=0
    for i in range(r+1):
        res+=rec(k+1,(tight and (r==i)),(s+i)%d)
        res %=1000000007
    return res
    



d=int(input())
n=input()
print(rec(0,True,0))
