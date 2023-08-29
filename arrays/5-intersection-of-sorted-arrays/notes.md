# Intersection of two sorted arrays

[CodeStudio](https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems) <br>
Input: 
A: ```[1 2 3 3 4 5 6]```
, B: ```[3 3 5]```<br>
Output: ```[3,3,5]```

## Brute Force Approach :-
* Create a visited array for array B to keep track of mapped elements
* For each element of A, search B to find the same element, also make sure it hasn't already been visited

<b>Code</b> <br>

```cpp
for(int i = 0; i < n1; i++) {
    for(int j = 0; j < n2; j++) {
        if(A[i] == B[j] && vis[j] == 0) {
            ans.pushback(A[i]);
            vis[j] = 1;
            break;         //Break from the B array's loop when element is found
        }
        if(B[j] > A[i]) {   //Break if B's elements are greater as the array is sorted
            break;
        }
    }
}
```

### Complexity
<strong>Time: </strong> <br>
O(n1 * n2)

<strong>Space: </strong> <br>
O(n2) - for visited array

## Optimal Approach :-
* Keep two iterators i and j for both the arrays
* Run a loop, ```while(i < n1 && j < n2)```
* If ```a[i] == b[j]``` insert the element in ans array
* If ```a[i] < b[j]```, i++, because ```a[i]``` cannot have a partner
* If ```b[j] < a[i]```, b++, bcz ```b[j]``` cannot have a partner

### Complexity
<strong>Time: </strong> <br>
O(n1 + n2)

<strong>Space: </strong><br>
O(n1 + n2) for storing the ans<br>
Otherwise, O(1)