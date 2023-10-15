#include <iostream>
#include <cctype>
#include <string.h>

using namespace std;
int main(int argc, char** argv) {

//cout<<"Input a text : ";
//string text;
//getline(cin,text);
//int counter= 0 ;
//for(int i=0;i<text.length();i++){
//   if(text[i]==' '){
//   	counter+=1;
//   }	
//}

//cout<<counter;
//character
//char character;
//cout<<"input a character : ";
//cin>>character;
//if (isdigit(character)){
//	cout<<"the character is a digit";
//}else if(isalpha(character)){
//	cout<<"the character is a letter";
//}

//3rd question
string phrase;
char space = ' ';
int counter = 0;
int j;
int words =1;
cout << " Enter your phrase : ";
getline(cin,phrase);

for (int i= 0; i < phrase.length(); i ++) {
	if (phrase[i] != space) {
		counter += 1;
	}
}

cout << "The characters without space: " << counter <<endl;
for(j=0 ; j < phrase.length(); j ++){
j;
}

cout << " the characters with Space : "  << j << endl;
int w;

for(w=0;w<phrase.length();w ++){
	if (phrase[w] == space) {
		words += 1;
	}
}
cout<<"words : "<<words;



	return 0;
}