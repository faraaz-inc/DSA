#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& nums);

int main() {
    vector<int> v = {4,5,6,7,8,1,2,3};
    if(check(v)) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }
    return 0;
}


bool check(vector<int>& nums) {
    //Initialise pivots to 0
    int pivots = 0;
    int n = nums.size();

    //Iterate through the array and check if current element is less than or equal to next
    for(int i = 0; i < n; i++) {
        
        if(nums[i] <= nums[(i + 1) % n])            //% operator compares the last element with first
            continue;                               //i = n,  -->  i + 1 = n + 1, --> (n + 1) % n = 1
        else {
            pivots++;                               //increase pivots if next element is not greater than or
            if(pivots >= 2)                             //equal to current
                return false;
        }
    }
    return true;
}