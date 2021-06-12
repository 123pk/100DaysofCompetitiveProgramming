/*
Platform :- Codeforces 
Problem :- F - interesting functions
Contest :- Codeforces Round #725 Div 3
Approach :- You need to analyse the problem on certain test case , You will find that atleast ( b-a) digits will be changed as 
            we are going from 'a' to 'b' .
            if element is divisible by 10 , one extra digit is changed,
            similarly if element is divisible by 100 one more extra digit is changed ,
            moving from 99 - >100 , atleast (100 - 99) digits will be changed which is '1'
            * as 100 is divisible by 10 one more digit is change so total '2' digits are changed
            * and 100 is divisible by 100 so one more digit is changed , hence total count = '3' which is our answer ,
            similarly we will check for all 10,100,1000,10000....till 100000000 .
*/
