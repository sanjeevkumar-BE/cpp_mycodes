#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cout<<"Enter The Size Of Array : ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	//to print array
	cout<<"Your Array Is = ";
	for(int i=0; i<n; i++){
		cout<<arr[i];
		cout<<" ";
	}
	//reversed array
	cout<<"\nReversed Array is = ";
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	reverse(arr,arr+size);
	for(int i=0; i<size; i++ ){
		cout<<arr[i];
		cout<<" ";
	}
	return 0;
}
