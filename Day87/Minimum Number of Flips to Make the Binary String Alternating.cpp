/*
Platform :- Leetcode
Problem :- Minimum Number of Flips to Make the Binary String Alternating
Contest :- Weekly contest 244

Approach :-
if you will analyse the problem on different test case you will find that "type -1 " task is not useful for even length strings .
First I checked if string is already valid or not . If not then 
I made two cases :-
Case 1 :- 
even length string , in this case I find the costs to covert my string to 101010... form and to 01010.. form and minimum out of two is our answer .

Case 2 :- 
For odd length string I break my string into two contiguous parts and "type 1" task is very useful here . I used prefix and suffix array , 
* where " prefix[ i ] " give me the cost of converting my sub string from [0 to i ]  into "10101..."
* and suffix [ i+1 ]" give me cost of converting my sub string from
 [ i+1 , end_of_string ]

similarly we will find for "010101..." and min ( pref[ i ] + suff[ i +1 ] ) is our answer . 
Use pen paper and solve this test case "01001001101", ans is 2 for this 

*/
