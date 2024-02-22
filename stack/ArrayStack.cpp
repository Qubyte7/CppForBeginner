#include <iostream>
using namespace std;
class Stack{
    int *arr;
    int nextIndex;
    int capacity;
public:
Stack(){
    capacity = 4;
    arr = new int[capacity];
    nextIndex = 0;
}
Stack(int cap){
    capacity = cap;
    arr = new int[capacity];
    nextIndex = 0;
}
int size(){return nextIndex;}
bool isEmpty(){
return nextIndex ==0;
}
void push(int element){
    if(nextIndex == capacity){
        cout<<"Stack OverFlow !"<<endl;
        return;
    }else{
        arr[nextIndex] = element;
        nextIndex++;
    }
}
void pop(){
    if(isEmpty()){
        cout<<"Stack Overflow !"<<endl;
        return;
    }
    nextIndex--;
}
int pop(){
    if(isEmpty()){
        cout<<"Stack OverFlow !"<<endl;
        return 0;
    }
    return arr[nextIndex-1];
};

int main(){

}