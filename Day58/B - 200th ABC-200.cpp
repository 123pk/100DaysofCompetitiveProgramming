/*
Platform :- Atcoder
Problem :- A - Century 
Contest :- B - 200th ABC-200.cpp
*/
n,k=map(int,input().split())
for i in range(k):
    if(n%200==0):
        n/=200
    else:
        t=1000
        temp=n*t
        n=200+temp
print(int(n))
