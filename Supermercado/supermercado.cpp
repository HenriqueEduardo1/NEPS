#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double p,g,v,resp;
    
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>p>>g;
        v = (1000*p)/g;
        if(i==0){ resp = v; }
        else if(v < resp){ resp = v; }   
    }
    cout << fixed << setprecision (2);
    cout<<resp<<endl;
}