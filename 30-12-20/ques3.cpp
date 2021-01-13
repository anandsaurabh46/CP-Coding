#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int x, y;
    cin >> x >> y;
    long long int k = x*x-4*y;
    int sq = sqrt(k);
    if(sq*sq==k) {
        if((x+sq)%2==0) cout << "yes";
        else cout << "no";
    }
    else cout << "no";
    return 0;
}
