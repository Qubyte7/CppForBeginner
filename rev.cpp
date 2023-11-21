#include<iostream>
using namespace std;
int fibon(int n){
	if(n== 0 || n == 1) return n;
	return fibon(n -1) + fibon(n -2);
}

int main(){
	int m;
	cout<<"n : ";
	cin>>m;
	cout << fibon(m);
	return 0;
}
