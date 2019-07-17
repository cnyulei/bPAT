#include <iostream>
#include <string>
using namespace std;

void isornot(string s)
{
	//根据字符串s判断符不符合条件，输出YES 或 NO
	int a1=0,a2=0,a3=0;
	int len=s.length();
	int j;
	string t="";
	t+=(s[0]);
	for(j=1;j<len;j++)
	{
		if(s[j]!=t[t.length()-1])
			t+=(s[j]);
	}
	if(t=="xPATx" || t=="xPAT" || t=="PATx" || t=="PAT" || t=="APAT" || t=="PATA" || t=="APATA" || t=="xAPAT" || t=="PATAx" || t=="xAPATAx")
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main()
{
	int n;
	cin>>n;
	int i;
	string str;
	for(i=0;i<n;i++)
	{
		cin>>str;
		isornot(str);
	}
	return 0;
}