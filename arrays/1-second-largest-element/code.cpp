#include<bits/stdc++.h>
#include<vector>
using namespace std;

pair<int, int> getSecondOrderElements(int n, vector<int> a);

int main() {
    vector<int> v = {1,2,3,4,5,6,7};
    int n = v.size();
    pair <int, int> p = getSecondOrderElements(n, v);
    cout << p.first << " ";
    cout << p.second << endl;
}


pair<int, int> getSecondOrderElements(int n, vector<int> a) {
    //Initialise largest to first element
    int largest = a[0];
    int second_largest = -1;       //Initialise second_largest to -1

    //Iterate through the array
    for(int i = 1; i < n; i++) {
        if(a[i] > largest) {           //If current element is greater than largest
            second_largest = largest;  //Store previous largest to second largest
            largest = a[i];            //Update largest
        }
        //If current element is less than largest and greater than second_largest
        if(a[i] > second_largest && a[i] < largest) {
            second_largest = a[i];    //Update second largest
        }
    }
    pair <int, int> p;
    p.first = largest;
    p.second = second_largest;
    return p;
}