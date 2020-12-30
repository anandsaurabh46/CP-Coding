#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

void print(stack<int> s) {
    vector<int> v;
    while (!s.empty()) 
    { 
        v.push_back(s.top()); 
        s.pop(); 
    }
    for(int i=v.size()-1; i>=0; i--) {
        cout << (char)('a'+((v[i]-1)/2));
    }
}

int main() {
    int t, n;
    cin >> t;
    int sum=0;
    while(t--) {
        stack<int> s;
        sum = 0;
        cin >> n;
        bool flag = false;
        if(n==2 || n>676) cout << -1;
        else {
                for(int i=1; i<53; i += 2) {
                    sum = sum+i;
                    s.push(i);
                    // cout << sum;
                    if(sum==n) {
                        // cout << i;
                        flag = true;
                        print(s);
                        break;
                    }
                    else if(sum>n) {
                        sum -= s.top();
                        s.pop();
                        sum -= s.top();
                        if(i == 51) break;
                        i = s.top();
                        s.pop();
                    } 
            }
            if(!flag) cout << -1;
        }
        cout << '\n';
    }
    return 0;
}
