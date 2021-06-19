/*
Platform :- Atcoder 
Problem :- C - swappable
Contest :- Atcoder Beginner contest 206
Approach :- First find all unique elements of array and sort them in decreasing order , for each value of unique elemnt the total number of valid pairs is 
            ( frequency_of_current_element * frequency_of_all_elements_smaller_than_it )   -----> add this value to total count
*/
