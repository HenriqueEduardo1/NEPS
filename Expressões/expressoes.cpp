#include <bits/stdc++.h>
using namespace std;

int n;
string m;
stack<char> e;

int main(){
    cin>>n;

    while(n--){
        cin>>m;
        for(int i=0; i < m.size();i++){
            if(m[i] == '(' || m[i] == '{' || m[i] == '['){ e.push(m[i]); }
            else if((!e.empty()) && e.top() == '(' && m[i] == ')'){ e.pop(); }
            else if((!e.empty()) && e.top() == '{' && m[i] == '}'){ e.pop(); }
            else if((!e.empty()) && e.top() == '[' && m[i] == ']'){ e.pop(); }
            else {e.push('.'); break;}
        }
        if(!e.empty()){ cout<<'N'<<endl; }
        else{ cout<<'S'<<endl; }

        while(!e.empty()) e.pop();
    }
}