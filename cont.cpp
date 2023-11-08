#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> vec_1={1,2,3,4,5};
	vector<int> vec_2(5,12);
	vector<int> vec_3(6,7,8,9,10);
	int i;
	cout<<"vector 1 :"<< endl;
	for(i=0;i<vec_1.size();i++){
		cout<<vec_1[i]<<",";
	};
	 cout<<"\n vector 2"<<endl;
	for(i=0;i<vec_2.size();i++){
		cout<<vec_2[i]<<",";
	}
	 cout<<"\n vetor 3"<<endl;
	 for(i=0;i<vec_3.size();i++){
		cout<<vec_3[i]<<",";
	}
	return 0;
}
