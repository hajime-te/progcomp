n=input()
temp=0
for nn in n:
    temp+=int(nn)
nn=int(n)


if nn%temp==0:
    print('Yes')

else:
    print('No')
