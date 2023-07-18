#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={5,4,3,44,23245,23,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+size);
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	//greatest element is 
	cout<<"\nLargest Element Is = ";
	cout<<arr[size-1];
	
	return 0;
}
