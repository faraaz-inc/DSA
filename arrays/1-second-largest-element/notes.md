# Second largest element in an Array

[CodeStudio](https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf)

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

    ### Complexity
    O(N) - For traversing through the array

  