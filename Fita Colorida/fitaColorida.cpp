#include <bits/stdc++.h>
using namespace std;
int n,cont,m = 10005,f[10005];
int main(){

    cin>>n;
    std::vector<int> cl;

    for(int i = 1; i <= n; i++){
        cin>>f[i];
        if(f[i] == 0){
            cl.push_back(i);
        }
    }
    for(int i = 1; i <= n; i++){
        if(f[i] == -1){
            for(int j : cl){
                m = fabs(min(m,(j - i)));
                if(m > 9){
                    m = 9;
                }
            }
            if(i==1){ cout<<m; }
            else{ cout<<" "<<m; }
            m = 10005;
        }
        else{
            if(i==1){ cout<<0; }
            else{ cout<<" "<<0;}
        }
    }cout<<endl;
}