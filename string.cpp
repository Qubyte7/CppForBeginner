#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char string1[]="Love your neigbour";
	char string2[]="Promote Peace";
	strcpy(string2,string1);
	cout<<string2<<endl;
	int size = strlen(string2);
	int size2=sizeof(string2)/sizeof(char);
	cout<<size << ","<< size2;
}




