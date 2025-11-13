#include <bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>array, int item) {
    int start = 0;
    int end = sizeof(array)/sizeof(array[0]) - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (array[mid] == item) {
            return mid;  // return index where found
        } else if (array[mid] < item) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1; // not found
}

int main() {
    vector<int>v = {1, 2, 3, 5, 4};
    int result = BinarySearch(v, 4);
    if (result != -1)
        cout << "Found at index " << result << endl;
    else
        cout << "Not found" << endl;
    return 0;
}