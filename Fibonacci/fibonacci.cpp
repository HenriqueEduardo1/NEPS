#include <bits/stdc++.h>
using namespace std;
int fib(int a){
    if(a == 0 || a == 1){
        return 1;
    }
    return fib(a-1) + fib(a-2);
}
int main(){
    int num;
    cin >> num;
    cout << fib(num) << endl;
}