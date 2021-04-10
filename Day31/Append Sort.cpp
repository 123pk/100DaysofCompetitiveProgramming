/*
Platform :- Coding Competition with google
Contest :- Google Codejam 1A 2021
Problem :- Append Sort
*/
t=int(input())
for i in range(t):
    ans=0
    n=int(input())
    A=list(map(int,input().split()))
 
    for j in range(1,n):
        #print(j)
        if(A[j-1]<A[j]):
            continue
        else:
            if(A[j]==A[j-1]):
                A[j]=A[j]*10
                ans=ans+1
            else:
                temp=A[j]
                f=0
                z1=str(A[j])
                z2=str(A[j-1])
                c=0
                n1=len(z1)
                m=len(z2)
               
                for k in range(min(n1,m)):
                    if(z1[k]>z2[k]):
                        f=1
                        break
                    elif(z1[k]<z2[k]):
                        c=k+1
                        break
                
                if(f==0):
                    if(c>0):
                        l=abs(m-n1)
                        l=l+1
                        for xxx in range(l):
                            temp=temp*10
                        ans=ans+l
                    else:
                        l=abs(m-n1)
                        g1=0
                        for xx in range(n1,m):
                            if(z2[xx]!='9'):
                                g1=1
                                break
                        
                        if(g1==0):
                            l=l+1
                            for xxx in range(l):
                                temp=temp*10
                            ans=ans+l
                        else:
                            ans=ans+l
                            temp=A[j-1]+1
                else:
                    l=abs(m-n1)
                    ans=ans+l
                    for xxx in range(l):
                        temp=temp*10
                A[j]=temp
    
    
    print(f"Case #{i+1}:",ans);
    
