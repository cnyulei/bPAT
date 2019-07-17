#include <iostream>
using namespace std;

int main(){
	int n,m,i;
	cin>>n>>m;
	m=m%n;
	int *a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=n-m;i<n;i++)
	{
		cout<<a[i];
		if(i!=n-1)
			cout<<" ";
	}
	if(m%n!=0)
		cout<<" ";
	for(i=0;i<n-m;i++)
	{
		cout<<a[i];
		if(i!=n-m-1)
			cout<<" ";
	}
	cout<<endl;
	return 0;
}