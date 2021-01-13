#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

bool isSameStack(stack<char> stack1, stack<char> stack2) 
{ 
    bool flag = true;  
    if (stack1.size() != stack2.size()) { 
        flag = false; 
        return flag; 
    } 
    while (stack1.empty() == false) { 
        if (stack1.top() == stack2.top()) { 
            stack1.pop(); 
            stack2.pop(); 
        } 
        else { 
            flag = false; 
            break; 
        } 
    }  
    return flag; 
} 

int main() {
    string p;
    string l;
    cin >> p >> l;
    stack<char> str1;
    stack<char> str2;
    for(int i=0; i<p.size(); i++) {
        if(p[i]=='#') {
            if(!str1.empty()) str1.pop();
        }
        else str1.push(p[i]);
    }
    for(int i=0; i<l.size(); i++) {
        if(l[i]=='#') {
            if(!str2.empty()) str2.pop();
        }
        else str2.push(l[i]);
    }
    cout << (isSameStack(str1, str2) ? 1 : 0);
    
    return 0;
}