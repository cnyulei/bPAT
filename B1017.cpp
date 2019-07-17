
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	int chushu;
	cin>>num>>chushu;
	//²ğ·ÖnumÀ´³ıÒÔchushu
	int a,b,i,len=num.length();
	int beichushu,yushu=0;
	for(i=1;i<len;i++)
	{
		a=num[i-1]-'0';
		b=num[i]-'0';
		if(i==1)
		{
			yushu=a;
		}
		if(yushu<chushu)
		{
			beichushu = yushu*10+b;
		}else
		{
			beichushu = yushu;
		}
		yushu=beichushu % chushu;
		cout<<beichushu / chushu;
	}
	cout<<" "<<yushu<<endl;
	return 0;
}
