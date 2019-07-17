#include <iostream>
using namespace std;

const int max=100010;
int school[max]={0};
int main(){
	int n,schID,score;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>schID>>score;
		school[schID]+=score;
	}

	int k=1,M=-1;
	for (int j=1;j<=n;j++)
	{
		if (school[j]>M)
		{
			M=school[j];
			k=j;
		}
	}
	cout<<k<<" "<<M;
	return 0;
}