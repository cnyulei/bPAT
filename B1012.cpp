#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int n,i,a[5]={0,0,0,0,0};
	int flag[5]={0,0,0,0,0};
	cin>>n;
	int *num=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>num[i];
		if(num[i]%5==0)
		{
			a[0]+=num[i];
			flag[0]++;
		}
		else if(num[i]%5==1)
		{
			a[1]+=pow(-1,flag[1])*num[i];
			flag[1]++;
		}
		else if(num[i]%5==2)
		{
			a[2]++;
			flag[2]++;
		}
		else if(num[i]%5==3)
		{
			a[3]+=num[i];
			flag[3]++;
		}else
		{
			if(num[i]>a[4])
			{
				a[4]=num[i];
				flag[4]++;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		if(flag[i]==0)
			cout<<"N";
		else
		{
			if(i==3)
				cout<<setiosflags(ios::fixed)<<setprecision(1)<<a[i]/(double)flag[3];
			else
				cout<<a[i];
		}
		if(i!=4)
			cout<<" ";
	}
	cout<<endl;
	return 0;
}
