#include <iostream>
using namespace std;

class Figure{
  public :
    void area(int m){
        cout<<"area is "<< m*m << endl;
    }
    void area(int h,int j){
        cout<< "area is "<< h*j;
    }
};

int main(){
    Figure x,y;
    x.area(2);
    x.area(3,4);


    
    return 0;
}











