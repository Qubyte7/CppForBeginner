#include<iostream>
#include<utility>
#include<cstdlib>
#include<ctime>
using namespace std;

int partition(int array[],int low,int high){
    int pivot_index = low+(rand()%high-low+1);

    if(pivot_index !=high){
        swap(array[pivot_index],array[high]);
    } 
    int pivot_value= array[high];
    int i = low;
    for(int j=low;j<=high;j++){
      if(array[j]<=pivot_value){
        swap(array[i],array[j]);
        i++;
      }
    }

    swap(array[i],array[high]);
    return i;
};

void recursion_quickSort(int array[],int high,int low){
    if(low>high){
    int pivot = partition(array,low,high);
    recursion_quickSort(array,low,pivot-1);
    recursion_quickSort(array,pivot+1,high);
}
};
void quickSort(int array[],int length){
    srand(time(NULL));//is used to seed the random number generator provided by the rand function. The term "seed" refers to the initial value that is used to start the random number generation process.
    //This ensures that each time the program is run, the seed is different, leading to a different sequence of random numbers.
     recursion_quickSort(array,0,length-1);
};


int main(){
    int array[]= {2,34,54,24,53,5,894,4,4};
    int length  = sizeof(array)/sizeof(int);
    quickSort(array,length);
    for(int i=0;i<length;i++){
        cout<< array[i]<< " ";
    }
    cout<< endl;
    cout<<"wewe";

    return 0;

}



