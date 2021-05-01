/*
Platform :- Codechef
Problem :- Array Rotation (ARRROT)
Contest :- Apri Lunchtime
*/

# cook your dish here
n=int(input())
A=list(map(int,input().split()))
t=sum(A)

q=int(input())
y=list(map(int,input().split()))
for x in range(q):
    t=t*2
    t=t%(1000000007)
    print(t)
    
