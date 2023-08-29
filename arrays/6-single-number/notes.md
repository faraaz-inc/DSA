# Single Number

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.<br>
Input: nums = ```[4,1,2,1,2]``` <br>
Output: ```4```

## Brute Force :-

* Iterate over the array once, pick each element one  by one
* For each element, iterate over the array once more and check how many times that element appears in the array, keep a counter variable
* After iterating for an element, ```if(counter == 1)```, then that element is the answer

<strong>Code</strong>

```cpp
for(int i = 0; i < n; i++) {
    counter = 0;
    for(int j = 0; j < n; j++) {
        if(arr[j] == arr[i])
            counter++;
    }
    if(counter == 1)
        return arr[i];
}
```

### Complexity
<strong>Time: </strong> O(n^2)<br>
<strong>Space: </strong> O(1)

## Better :-

* First figure out the max element of the array
* Decalre a hash array of size max + 1 (to get the index of max element)
* Iterate over the array and update the no of times an element has occured in its corresponding index in hash array
* Finally iterate over the hash array and look which element has value == 1

<strong>Code</strong> <br>

``` cpp
for(int i = 0; i < n; i++) {    //Figure out max element
    maxi = max(arr[i], maxi);
}
int hash[maxi + 1] = {0};

for(int j = 0; j < n; j++) {    //Iterate over the array and update no of times an element is present in its corresponding place in hash table
    hash[arr[i]]++;
}
for(int k = 0; k < n; k++) {    //Iterate over the hash array and return the element which occured once
    if(hash[arr[i]] == 1) {
        return k;
    }
}
```

### Complexity
<strong>Time: </strong> <br>
O(N) for finding the max + O(N) for taking the data in hash + O(N) for iterating over the hash array <br>
Overall: O(3N)

<strong>Space: </strong> O(max_element)

### Another Approach

* <strong>Above method won't work if max element is very big (10^9), in that case use map data structure with ```long long``` as the key data type</strong>
* <strong>Also if the array has negative elements, it won't be straight fwd to hash them </strong>

<b>Code: </b> <br>

```cpp
    map<long long, int> mpp;

    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;      //Update value in map by one with key being equal to the element of the array
    }
    for(auto it : mpp) {    //Iterate over the map and check which key has value == 1, that key is the answer
        if(it.second == 1) {
            return it.first;
        }
    }
```

### Complexity

<strong>Time: </strong> <br>
```O(N/2 + 1)``` to store n/2 + 1 elements + ```O(NLogM)``` for inserting the elements of the map (m is the size of the map which is equal to N/2 + 1)

Overall: ```O(M) + O(NLogM)``` where M = N/2 + 1

<strong>Space: </strong> <br>
```O(M)``` for map

## Optimal :-

```a^a = 0``` -> XOR on the same element returns 0 <br>
```0^a = a``` -> XOR of any element with 0 is the element itself

* xor entire array, the last remaining element will be the one which is single, others will be cancelled out.

<strong>Code</strong>

```cpp
int xorr = 0;
for(int i = 0; i < n; i++) {    //iterate over the array
    xorr = xorr^arr[i];     //xor with every element
}
return xorr;
```

### Complexity

<strong>Time: </strong> O(N) <br>
<strong>Space: </strong> O(1)