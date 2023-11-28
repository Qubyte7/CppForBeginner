#include<iostream>
using namespace std;
void merge_sort(int a[],int length){
    merge_sort_divide_recursion(a,0,length-1);
};
void merge_sort_divide_recursion(int a[],int l,int r){//l represents  the small index and r represents the large index of our array
    int m = l+(r-l)/2;//this is going to look at the middle index of the array
   if(l<r){
    merge_sort_divide_recursion(a,l,m); 
    merge_sort_divide_recursion(a,m+1,r);
    merge_sorted_array(a,l,m,r);//here we are providing the sorted and divided array to the merge_sorted_array function to merge them
   }
};
void merge_sorted_array(int a[],int l,int m,int r){
    int left_index_length = m-l+1;
    int right_index_length = r-m;
    int temp_left[left_index_length];
    int temp_right[right_index_length];
    int i,j,k;
    for(i=0;i<left_index_length;i++){
        temp_left[i] = a[l+i];
    }
    for(i=0;i<right_index_length;i++){
        temp_right[i]= a[m+1+i];
    }
    for(i=0,j=0,k=l;k<=r;k++){
        //k is going to help us to keep track of elements going to be merged and added into the array
        //i :  is helping to keep track of elements in the temp_left array
        //j: is helping to keep track of elements in the temp_right array
         if((i<left_index_length)&&(j>=right_index_length|| temp_left[i]<=temp_right[j])){
            a[k]= temp_left[i];
            i++;
         }else{
            a[k]= temp_right[j];
             j++;
         }
    }
};

int main(){
    int array[]{12,6,7,4,7,43,45,1,2,3};
    int length = sizeof(array)/sizeof(int);
    merge_sort(array,length);
    for(int i=0;i<length;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}













