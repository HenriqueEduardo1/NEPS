#include <iostream>
using namespace std;
int n,s,v,mi,ma;
int main(){
    cin>>n;
    
    for(int i = 0; i<n;i++){
        cin >> v;
        s += v;
        ma = max(s-mi, ma);
        mi = min(s, mi);
    }
    cout<<max(ma,s)<<endl;
}