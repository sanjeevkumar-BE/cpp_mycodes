#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter The Num = ";
	cin>>n;
	//loop for create a table,
	for(int i=0; i<=16; i++){
		int table=n*i;
		cout<<n<<"*"<<i<<"="<<table;
		cout<<endl;

	}
	return 0;
}
