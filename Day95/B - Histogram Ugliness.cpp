/*
Platform :- Codeforce
Contest :- Codeforces LATOKEN Round 1 (Div. 1 + Div. 2)
Problem :- B - Histogram Ugliness
Approach :- First calculate the current ugliness of array then try to remove all such ugliness where A[i] is local maxima , for i=0 and i==n-1 if 
            they are greater than their surrounding element then also make them equal to surrounding element and change the ugliness accordingly
*/
