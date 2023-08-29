# Second largest element in an Array

[CodeStudio](https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf)

<b>Input: </b>```[1, 2, 3, 4, 5]```<br>
<b>Output: </b>```[5, 4]```


## Brute Force :-

* Sort the array in ascending order
* Pickup the largest element from the last
* Iterate from the second to last element until we find an element that is not equal to largest.

    ### Complexity
    O(NLogN) - For sorting the array

## Better :-

* Go through an array once to get the largest element
* Go once again to find the largest element that is not equal to the previous largest.

    ### Complexity
    O(N) - We're doing two linear traversals through the array

## Optimal :-

* Take two variables, largest and sec_largest and iterate through the array
* Replace largest variable on the go if current element is greater than the prev largest and store prev largest value in sec_largest
``` cpp
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        if(arr[i] > second_largest && arr[i] < largest)
            second_largest = arr[i];
    }
```
### Complexity
O(N) - For traversing through the array

