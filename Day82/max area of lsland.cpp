/*
Platform :- Leetcode
Problem :- Max Area of Island
Approach :- i. find all the index where there is land ( represented by '1' in grid ) ,
            ii. maintian a visited array to check whether a index is already visited or not
            iii. if index is not visited and have a land then we will start BFS in all the four directions and check for valid indexes and increment our count if found 
                 island , we will mark that index as visited and return the max value at the end 
*/
