# Check if array is sorted and rotated

[LeetCode](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/)

<b>Input:</b> nums = ```[3,4,5,1,2]``` <br>
<b>Output:</b> ```true```

<b>Input:</b> nums = ```[2,1,3,4]``` <br>
<b>Output:</b> ```false```

## Solution :

* Iterate through the array and check for each element, if the next element is greater than or equal to it.
* Compare the last element to the first
``` cpp
    for(int i = 0; i < n; i++) {
        
        if(nums[i] <= nums[(i + 1) % n])
            continue;
        else {
            pivots++;
            if(pivots >= 2)
                return false;
        }
    }
```

* inside the ```if``` condition ```%``` operator is required to compare the last element to the first. <br>
At i = n - 1(last element), the loop will try to compare ```nums[i]``` with ```nums[i + 1]```, i.e., ```nums[n]```, which obviously is not a part of the array.<br>
Therefore to compare the last element with the first element, we can use the formula ```nums[i] <= nums[(i + 1) % n]```