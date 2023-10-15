#include <iostream>
using namespace std;

namespace userDefined{
int insideNamespace = 12;
int cout(){
	return insideNamespace;
};

};

int myGlobal =24;
int couti(){
	return myGlobal;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
//	cout <<"hello world"<<endl;
//	cout <<"This is my first programm in c++"<<endl;
//   int x;
//    cout <<"enter a number ";
//    cin>>x;
//    cout<<x<< endl;
//    
//    string myString = "Mugisha";
//    cout<<myString[0];

//cout<<"Enter your first name :";
//string firstname;
//cin>>firstname;
//
//string lastname;
//cout<<"Enter the last name :";
//cin>>lastname;
//int age;
//cout<<"Enter your age :";
//cin>>age;
//
//cout<<firstname <<" "<< lastname <<" " << age <<endl;
	
//2nd q
//cout<<"ENter your fullname :";	
//string fullname;
//getline(cin,fullname);
//
//cout<<"initial amount :";
//int initialAmount;	
//cin>>initialAmount;
//
//cout<<"enter interest rate per a month :";	
//int rate;
//cin>>rate;
//
//cout<<"payment time in terms of years :";	
//int frequency;
//cin>>frequency;
//
//int interest;
//interest = (initialAmount * rate * frequency)/100;
//
//
//cout<<fullname <<endl <<initialAmount <<endl << rate <<endl << frequency<< endl <<interest;		
	
	
string names ; 
string brotherNames;

//cout<<myGlobal;
couti();
cout<< "Enter your names : ";
getline(cin,names);
cout<<names <<endl;
cout << "ENter your brother's name :";
getline(cin,brotherNames);
cout << brotherNames;

	
	
	
	
	
	return 0;
}