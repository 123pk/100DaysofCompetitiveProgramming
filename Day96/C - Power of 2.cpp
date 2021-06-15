/*
Platform :- Codeforces 
Contest :- 
Problem :- C - Power of 2
Approach :- First find bits representation of given number , if no of '1's in bits representation are > k then  it is never possible .
            else we push (2,i) where ith bit is '1' to our priority queue , then we start dividing the max element by 2 and inccrease value of 'count'as soon as it becomes
            'k' we break out of loop and print all elements of priority_queue else we have '1' as out max element then also it is not possible
*/
