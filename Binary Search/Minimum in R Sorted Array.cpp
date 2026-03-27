#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rotatedSortedArrayMin(vector<int>& arr, int target) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] > arr[r]) l = m + 1;
        else r = m;
    }
    return arr[l];
}

int main() {
    vector<int> arr = {72, 12, 34, 90, 122};
    int target = 90;
    cout << rotatedSortedArrayMin(arr, target) << endl;
    return 0;
}