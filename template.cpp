#include <stdio.h>
#include <iostream>
using namespace std;

template <typename T>
T sum(T a,T b){
    return a + b;
}
int main() {
    int x=5,y=2;
    double n=5,m=2.5;
   cout<<sum(x,y)<<endl;
   cout<<sum(n,m)<<endl;
   

    return 0;
}