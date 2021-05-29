/*
Platform :- Leetcode
Problem :- Minimum speed to arrive on Time
Contest :- Weekly contest 242
Approach :- Case i.  when no solution we will check for value of 10000000 if (total_time > hour) then it is never possible 
            Case ii. we will maintain two vlues , start and end which will be (start = 1 and end = 10000001)
                     then we will find the "mid" and find the total time required if our speed is equal to "mid"
                     we will compare with "hour" and change the value of "start" and "end" respecively .
                       
*/
