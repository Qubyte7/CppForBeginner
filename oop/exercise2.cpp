#include <iostream>
#include <stdio.h>
using namespace std;
class Rectangle {
public:
    int length ,breadth;
    void area(){
    int area = length * breadth;
   
    cout<< area << endl;
    }
Rectangle(){
length=0;
breadth=0;

}
Rectangle(int s1, int s2){
    length=s1;
    breadth=s2;
  
}
Rectangle(int m){
    length=m;
    breadth=m;
  
}
};

int main(){
    int x,y;
    x=12;
    y=2;
    Rectangle rectangle1;
    Rectangle square;
    Rectangle rectangle2;
    
    rectangle1 = Rectangle();
    square=Rectangle(x);
    rectangle2=Rectangle(x,y);

    rectangle1.area();
    square.area();
    rectangle2.area();
    

    
    return 0;
};








