#include <iostream>
using namespace std;
int main(){
    int n, cont = 0, men = 0;
    string d;

    cin>>n>>d;
    int t[n];
    t[0] = 0;
    
    for(int i = 0; i < n-1;i++){
        if(d[i]=='A'){ cont++; t[i+1] = cont; }
        else{ cont--; t[i+1] = cont; }
        men = min(men,t[i+1]);
    }
    
    men *= -1;
    
    for(int i = 0; i < n;i++){
        if(i == 0){ cout<< t[i]+men; }
        else{cout<<" "<< t[i]+men;}
    }
    cout<<endl;
}