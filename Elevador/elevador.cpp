#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pa[n+1];
    pa[0] = 0;
    int r = 0;
    
    for(int i=1; i<=n; i++){
        cin>>pa[i];
    }
    sort(pa,pa+(n+1));
    
    for(int i=0; i<n; i++){
        if(pa[i+1] - pa[i] > 8){
            r = 1;
        }    
    }
    if(r==0){cout<<'S'<<endl;}
    else{cout<<'N'<<endl;}
}