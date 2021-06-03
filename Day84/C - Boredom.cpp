/*
Platform :- Codeforces
Contest :- Codeoforces Round 260 #Div 2
Problem :- C - Boredom
Approach :- Standard DP , DP[0]=1 , DP[1]= count of (1)
            and for other (2 <= i <= n ) DP[i] = max( DP[i-1] , DP[i-2]+ count OF (i)*i)
*/
