#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	cout<<"Enter The Size of Array ";
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	//to print array
	for(int i=0; i<n; i++){
		cout<<arr[i];
		cout<<" ";
	}
	//to sort array
	cout<<"Sorted Array Is = ";
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+size);
	for(int i=0; i<size; i++){
		cout<<arr[i];
		cout<<" ";
	}
}
