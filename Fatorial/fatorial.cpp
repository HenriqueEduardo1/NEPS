#include <bits/stdc++.h>
using namespace std;
int fat(int a){
    if(a == 0 || a == 1){
        return 1;
    }
    return a * fat(a-1);
}
int main(){
    int num;
    cin >> num;
    cout << fat(num) << endl;
}