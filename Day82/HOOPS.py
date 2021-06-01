"""
Platform :- Codechef
Contest :- Codechef lunchtime
Problem :- HOOPS
Approach :- every (n+1)/2 th step will be the last position
"""

test_case = int (input())

for test in range( test_case):
  n = int( input() )
  print( (n+1)/2)
