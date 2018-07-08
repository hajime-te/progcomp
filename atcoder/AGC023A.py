N=int(input())
A=list(map(int,input().split()))
B=[0]
total=0
count=1
answer=0
 
for i in range(len(A)):
  total+=A[i]
  B.append(total) #iまでの部分和
 
B.sort() #部分和が同じ部分の数を数えると解ける
for i in range(1,len(B)):
  if B[i]==B[i-1]:
    count+=1
  else:
    answer+=count*(count-1)/2 #部分和が同じものを2個取り出す組み合わせ
    count=1
answer+=count*(count-1)/2
    
print(int(answer))
