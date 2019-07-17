#include <iostream>
#include <string>
using namespace std;

string DAY(char ch)
{
	string day;
	switch (ch){
		case 'A':
			{
				day = "MON";
				break;
			}
		case 'B':
			{
				day = "TUE";
				break;
			}
		case 'C':
			{
				day = "WED";
				break;
			}
		case 'D':
			{
				day = "THU";
				break;
			}
		case 'E':
			{
				day = "FRI";
				break;
			}
		case 'F':
			{
				day = "SAT";
				break;
			}
		case 'G':
			{
				day = "SUN";
				break;
			}
	}
	return day;
}

int hour(char ch)
{
	if((ch>='0')&&(ch<='9'))
		return ch-48;
	return int(ch)-64+9;
}

int min(string s1,string s2)
{
	//根据相同字符的位置，判断其分钟数
	int i,len;
	len=s1.length();
	for(i=0;i<len;i++)
	{
		if(s1[i]==s2[i] && s1[i]>='a' && s1[i]<='z')
			return i;
	}
	return 0;
}
int main()
{
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	char a[2];
	int i,j=0,len;
	len=s1.length();
	for(i=0;i<len;i++)
	{
		if(s1[i]>='A' && s1[i]<='Z' && s1[i]==s2[i])
		{
			a[j]=s1[i];
			j++;
			if(j==2)
				break;
		}
	}
	cout<<DAY(a[0])<<" ";
	if(hour(a[1])<10)
		cout<<"0"<<hour(a[1])<<":";
	else
		cout<<hour(a[1])<<":";
	//s1和s2确定周和时，大写字母
	if(min(s3,s4)<10)
		cout<<"0"<<min(s3,s4)<<endl;
	else
		cout<<min(s3,s4)<<endl;
	return 0;
}