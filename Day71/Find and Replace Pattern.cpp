/*
Platform :- Leetcode
Problem :- Find and Replace Pattern
Approach :- i. filter string of same length in words .
            ii. store the index of occurence of character in pattern string 
                ex:- "apple"  be the string then we will be
                      storing "a" - [1] , "p" - [2,3] , "l" - [4] ,"e" - [5]
                      
            iii. we will find the same for filtered strings .
            iv. then we will itterate from 0 to len-1 and check if the character in pattern string and words string has same vector containing index of occurence
*/


                              
