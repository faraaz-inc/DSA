#include<iostream>
#include<vector>
using namespace std;
 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m);

int main() {
    vector<int> v1 = {1,2,3,4,5,6};
    vector<int> v2 = {3,4,5};
    int n1 = v1.size();
    int n2 = v2.size();
    vector<int> ans = findArrayIntersection(v1, n1, v2, n2);
    for(auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
	int i = 0, j = 0;
	vector<int> ans;
    //Iterate over both the arrays
	while(i < n && j < m) {
		if(arr1[i] == arr2[j]) {        //If both elements are equal, store in the ans array
			ans.push_back(arr1[i]);
			i++;                        //Update i and j
			j++;
		}
		else if (arr1[i] < arr2[j]){      //arr1[i] won't have a partner, move i fwd
			i++;
		}
		else {                          //If arr2[j] < arr1[i], arr2[j] won't have a partner, move j fwd
			j++;
		}
	}
	return ans;
	
}