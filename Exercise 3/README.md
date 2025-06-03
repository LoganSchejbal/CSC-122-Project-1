Exercise #3:

Write the following functions, and test them all in a single main program.  Do not change the given function headers or function calls.  
A.	Write a function 
vector append(vector a, vector b) 

that appends one vector after another. 
For example, if a is 
1 4 9 16 
and b is 
9 7 4 9 11 
then append returns the vector 
1 4 9 16 9 7 4 9 11 

B.	Write a function 
vector merge(vector a, vector b) 

that merges two vectors, alternating elements from both vectors. If one vector is shorter than the other, then alternate as long as you can and then append the remaining elements from the longer vector. 
For example, if a is 
1 4 9 16 
and b is 
9 7 4 9 11 
then merge returns the vector 
1 9 4 7 9 4 16 9 11 

C.	Write a function 
vector merge_sorted(vector a, vector b) 

that merges two sorted vectors, producing a new sorted vector. Keep an index into each vector, indicating how much of it has been processed already. Each time, append the smallest unprocessed element from either vector, then advance the index. 
For example, if a is 
1 4 9 16 
and b is 
4 7 9 9 11 
then merge_sorted returns the vector 
1 4 4 7 9 9 9 11 16
