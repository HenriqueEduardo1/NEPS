#include <bits/stdc++.h>
using namespace std;
int n,vd,ve;
int main(){
    cin>>n;
    cin.ignore();
    string l;

    while(getline(cin,l)){
        for (int j = 0; j < l.size(); j++){
            if(l[j]=='{'){ ve++; }
            if(l[j]=='}'){ vd++; }
        }
            
    }
    if(ve==vd){ cout<<'S'<<endl; }
    else{ cout<<'N'<<endl; }
}