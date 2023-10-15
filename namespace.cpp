#include <iostream>
using namespace std;


namespace userDefined{
int insideNamespace = 12;
int cout(){
	return insideNamespace;
	     };
};

int myGlobal =24;

int cout(){
	return myGlobal;
}



int main(int argc, char** argv) {
	int cout = 43;
	
std::cout <<" The local variable cout in main is " <<cout 
          << "\n The variable in userDefined namespace is "<<userDefined::insideNamespace 
		  << "\n the ouputof cout() in userDefined is "<<userDefined::cout() 
		  << "\n the value of my global is "<< ::myGlobal 
		  <<"\n the output of global cout() is " <<::cout();
		  
	return 0;
}
