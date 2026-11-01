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
	cout<<"display array before insertion :"<<endl;
		for (int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<""<<endl;
	//now insert new array element at  any position 
	int pos;
	int value;
	cout<<"enter position of array where you want to insert new element :"<<endl;
	cin>>pos;
	cout<<" enter new value you want to insert at postion "<< pos <<" :"<<endl;
	cin>>value;
	//shifting elements to right 
	for(int i=n;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos-1]=value;
    n++;
	cout<<"array after insertion of new element "<<value<<" at position no.  "<<pos<<endl;
	cout<<"display array before insertion :"<<endl;
		for (int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
		return 0;
}
