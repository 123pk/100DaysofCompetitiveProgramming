/*
Platform :- Codeoforces 
Contest :- Educational Round 110
Problem :- C -  unstable string
Approcah :- find all the good substring and add ( tot + = (n*(n-1))/2 ) to total count where 'n' is the length of that good substring 
            A substring is good if it can be trasformed into '10101...' or '01010..'
            * At the end take care of common substrings that are been added.
            Those substrings are only of '?' so we need to find the contigous substring of '?' and substract ' m*(m-1)/2' where m=' length of that substring of '?''
*/
