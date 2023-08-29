#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k);
void reverseArray(vector<int>& nums, int s, int e);

int main() {
    vector<int> v = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;
    rotate(v, k);
    //Print the rotated array
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;                              //On rotating the array n times, it becomes same as OG
    reverseArray(nums, 0, n - k - 1);       //Reverse first n - k elements
    reverseArray(nums, n - k, n - 1);       //Reverse k elements from the right
    reverseArray(nums, 0, n - 1);           //Reverse entire array
}

void reverseArray(vector<int>& nums, int s, int e) {
    int n = nums.size();
    while(s <= e) {
        swap(nums[s++], nums[e--]);
    }
}