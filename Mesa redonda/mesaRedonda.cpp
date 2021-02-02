#include <iostream>
using namespace std;
int r(int a){
    if(a%3==0){return 0;}
    else if(a%3==1){return 1;}
    else{return 2;}
}
int main(){
    int a,b,A,B;
    cin>>a>>b;
    A = r(a);
    B = r(b);
    
    int c[3] = {5,5,5};
    
    c[A] = A;

    if(A==B && A!=2){ c[B+1] = B; }
    else if(A==B && A==2){ c[0] = B; }
    else{c[B] = B;}
    
    for(int i=0; i < 3; i++){
        if(c[i] == 5){
            cout<<i<<endl;
        }        
    }
}