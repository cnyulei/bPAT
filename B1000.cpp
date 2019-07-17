#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int i,n,y;
	cin>>n>>y;
	int *a=new int[y];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int count=0;
	for(i=0;i<n;i++)
	{
		if(y<a[i])
			break;
		if(a[i]!=520)
		{
			count++;
			y=y-a[i];
		}
	}
	cout<<count<<" "<<y<<endl;
	return 0;
}