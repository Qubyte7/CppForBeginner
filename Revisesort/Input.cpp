#include <iostream>


using namespace std;

int main(){
 string name = "innocent";
 cout<<name.size();
 cout<<name.length()<<endl;
 string value;
 cout << "enter a string : ";
 getline(cin, value);
for(char &c: value){
         c= toupper(c);
};
cout<<value<<endl;

string value2;
cout<< "enter the second value : ";
cin.ignore();
getline(cin, value2);
//  for(char &c: value2){
//    if( c ==' '){
//       continue;
//    }
//  } 

value2.erase(std::remove(value2.begin(), value2.end(), ' '), value2.end());
cout<<value2<<endl;



return 0;
 
 
 
 }