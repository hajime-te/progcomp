s=input()
ans=0

def slove(left,right):
    if len(right)==0:
        return eval(left+right)
    return slove(left+right[0],right[1:])+slove(left+'+'+right[0],right[1:])

ans=slove(s[0],s[1:])
print(ans)
