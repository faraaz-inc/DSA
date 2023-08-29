#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums);

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3};
    int k = removeDuplicates(nums);
    cout << "No of unique elements is: " << k << endl;
    return 0;
}



int removeDuplicates(vector<int>& nums) {
    int j = 0;                              //Iterator for placing the unique elements
    int n = nums.size();
    for(int i = 1; i < n; i++) {
        if(nums[i] != nums[j]) {           //If unique element is found,
            nums[j + 1] = nums[i];           //Replace (j + 1)th element with the unique element
            j++;                           //Update j
        }
    }
    return j + 1;
}