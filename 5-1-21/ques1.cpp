#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void print(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) cout << arr[i] << ' ';
    cout << '\n';
}

void selectionSort(vector<int> &arr, int s, int e) {
    int pos;
    for(int i=s; i<e; i++) {
        pos = i;
        for(int j=i+1; j<=e; j++) {
            if(arr[pos]>arr[j]) pos = j;
        }
        if(pos!=i) swap(arr[pos], arr[i]);
        print(arr);
    }
}

int main() {
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    selectionSort(arr, 0, n-1);
    return 0;
}
