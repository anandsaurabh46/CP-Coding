#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int simple_sum(int n) {
    int sum=0;
    while(n) {
        sum += n%10;
        n/=10;
    }
    return sum;
}

int dig_sum(int n) {
    if(n<10) return n;
    else {
        int sum = 0;
        while(n) {
            sum += n%10;
            n/=10;
        }
        return dig_sum(sum);
    }
}

int main() {
    int t;
    // int t, sum, x=0;
    cin >> t;
    string s;
    while(t--) {
        getline(cin, s);
        cout << s;
    //     vector<string> str(10000);
    //     x=0;
    //     for(int i=0; i<s.size(); i++) {
    //         if(s[i]==' ') cout << str[x++];
    //         else str[x]+=s[i];
    //     }
    //     vector<int> score(x+1, 0);
    //     for(int i=0; i<str.size(); i++) {
    //         sum=0;
    //         for(int j=0; j<str[i].size(); j++) sum+=simple_sum((int)(str[i][j]));
    //         score[i]=dig_sum(sum);
    //         // cout << score[i];
    //     }
    // }
    return 0;
}
}