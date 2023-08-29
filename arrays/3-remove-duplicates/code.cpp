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
    int j = 0;
    int n = nums.size();
    for(int i = 1; i < n; i++) {
        if(nums[i] != nums[j]) {
            nums[j + 1] = nums[i];
            j++;
        }
    }
    return j + 1;
}