#include <iostream>
#include<string.h>
using namespace std;
int main(int argc, char** argv) {
//	cout << " Enter a word : ";
//	string word;
//	cin >> word;
//	int length=0;
//char name[] = "mugisha";	
//int i=0;
//while(name[i]!='\0'){
//	
//	i++;
//	
//}
//	cout <<" the length of your string is " << i <<endl;

//polindrome : it a type of a word that is the same we read from both sides
char polindrome[]= "omo";
int i;
int j;
int l=0;
while(polindrome[l] != '\0'){
	l++;
}
char polindrome2[]="";

for(i=l,j=0;i>=0;i--){
	polindrome2[j]=polindrome[i];
//	cout<<polindrome[i];
	
}
cout << polindrome2;

//3rd
//int strings;
//cout << "enter a string :";
//cin >> strings;
//string ferrow =  toupper(strings);
// cout<<ferrow;




	
	return 0;
}