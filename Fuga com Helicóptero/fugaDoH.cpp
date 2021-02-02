#include <bits/stdc++.h>
using namespace std;
int h,p,f,d;
double a,b;
int main(){
    cin>>h>>p>>f>>d;

    while(f != h && f != p){
        f+=d;
        if(f<0){ f = 15; }
        if(f>15){ f = 0; }
    }
    if(f == h){ cout<<'S'<<endl; }
    else{ cout<<'N'<<endl; }
}