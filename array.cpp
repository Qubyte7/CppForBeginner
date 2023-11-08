#include<stdio.h>
#include<iostream>

using namespace std;
class Array{
public:
	int row;
	int col;
	int i,j,m,r;
	int sum(int array[][]){
		
	}
	
};

int main(){
	//inserting
//    int myArray[]{50,60,70,80,100};
//    int sizee = sizeof(myArray)/sizeof(int);
//    int lastIndex  = sizee -1;
//    int position=2;
//    while (lastIndex >= position)
//    {
//     myArray[lastIndex+1]= myArray[lastIndex];
//     lastIndex= lastIndex-1;
//      
//    }
//    myArray[position] =15;
//
//    for(int i=0;i<=sizee;i++){
//        cout << myArray[i] <<endl;
//    }
//    
//    cout<< " =============================" <<endl;
//    //deleting
//    lastIndex=5;
//    while (lastIndex >= position){
//          myArray[position] =myArray[position+1];
//		  position++;	
//	}
//	for(int t=0;t<=lastIndex-1;t++){
//		cout<< myArray[t] <<endl;
//	}
	//multi dimensional array
//	int arr [3][3] = {{10,20,30},{40,50,60},{70}};
//	for (int m=0;m<3;m++){
//		cout<< "{";
//		for(int r=0;r<3;r++){
//			cout<<arr[m][r]<<" ,";
//		}
//		cout<<"},"<<endl;
//		
//	}
//

//USER PROMPTED ARRAY;


int i,j,m,r,row,col;
cout<<"** 2D-ARRAY **"<<endl;
 cout<<" Enter the length of the rows :";
  cin>>row;
  cout<<endl<<"Enter the length of the columns :";
  cin>>col;
int array[row][col];

for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		cout<<"element"<<"["<<i<<"]"<<"["<<j<<"] : ";
		cin>>array[i][j];
	}
}
int sum1=0;
int sum2;

//out putting array
cout<<"[";
for (int m=0;m<row;m++){
		cout<< "{";
		for(int r=0;r<col;r++){
			cout<<array[m][r];
			sum1+=array[m][r];
			if(r==col-1){
				cout<<"";
			}else{
				cout<<",";
			}
		}
		if(m==row-1){
			cout<<"}";
		}else{
		cout<<"},";
		}
		
			
	}
cout<<"]"<<endl;
cout<<"the sum is "<<sum1;
	
	
    return 0;
}
