#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int i;
	int j;
	int m;
	int y;
	//1
//	cout<<"Enter the limit : ";
//	cin>>m;
//	for(i=0;i<m;i++){
//	for(j=0;j<=i+1;j++){
//		if(i=0){
//			cout<<"*";
//		}else{
//		cout<<"*";
//		}
//		
//	}
//	cout<<endl;
//	}
	
	//2
	for(i=4;i>=0;i--){
		for(j=0;j<i;j++){
			cout<<" ";
		}
		for(y=0;y<=j;y++){
			cout<<"*";
		}
//		for(y=0;y<=i;y++){
//			cout<<"*";
//		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
