#include <iostream>
#include <string>
using namespace std;

const int max=100010;
const int mod=1000000007;
string str;
int leftN[100010]={0};
int main()
{
	cin>>str;
	int len=str.length();
	int i;
	for(i=0;i<len;i++)
	{
		if(i>0)
			leftN[i]=leftN[i-1];
		if(str[i]=='P')
			leftN[i]++;
	}

	int ans=0,right=0;
	for(i=len-1;i>=0;i--)
	{
		if(str[i]=='T')
			right++;
		else if(str[i]=='A')
			ans = (ans+leftN[i]*right)%mod;
	}
	cout<<ans<<endl;
	return 0;
}