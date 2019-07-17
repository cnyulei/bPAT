#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int a[101];  //存对应的数
	memset(a,0,sizeof(a));  
	int n,i,num;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		a[num]=1; //数的对应位置标记为1
	}
	for(i=0;i<=100;i++)
	{
		if(a[i]==1) //取出来
		{
			num=i;
		}
		while(num!=1)
		{
			if(num%2==0) //偶数
			{
				num=num/2;
			}else
			{
				num=(num*3+1)/2;
			}
			if(num<101 && a[num]==-1)
				break;
			if (num<101)
				a[num]=-1; //表示被检测过了			
		}
	}
	int count=0;
	for(i=100;i>0;i--)
		if(a[i]!=0 && a[i]!=-1)
		{
			if(count==0)
			{
				cout<<i;
				count++;
			}else{
				cout<<" "<<i;
			}
		}
	cout<<endl;
	return 0;
}