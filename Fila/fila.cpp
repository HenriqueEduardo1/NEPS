#include <bits/stdc++.h>
using namespace std;
int a,b,m,v1,v2;
int main(){
    cin>>a;
    vector<int> fIn;

    for (int i = 0; i < a; i++){
        cin>>v1;
        fIn.push_back(v1);
    }
    cin>>b;
    for (int i = 0; i < b; i++){
        cin>>v2;
        for (int j = 0; j < fIn.size(); j++){
            if(fIn.at(j) == v2){
                fIn.erase(fIn.begin() + j);
                break;
            }
        }
    }
    for(int r : fIn){
        cout<<r<<' ';
    }cout<<endl;
}