#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cout<<"enter no. of elements :"<<endl;
    cin>>n;
    cout<<"enter " << n <<" elements of array:"<<endl;
	for (int i = 0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"display array before deletion :"<<endl;
		for (int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<""<<endl;
		//now insert new array element at  any position 
	int pos;
	int value;
	cout<<"enter position of element in array you wnt to delete :"<<endl;
	cin>>pos;
	// loop to delete element 
	for(int i = pos - 1; i < n-1; i++){
		arr[i]= arr[i+1];
	}
	//decrease number of elements:
	n--;
	//display updated array
		cout<<"display array after deletion  :"<<endl;
		for (int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

