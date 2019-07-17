#include <iostream>
#include <string>
using namespace std;

struct student{
	string sname;
	string sno;
	int sgread;
};

int main()
{
	int n;
	student max,min,s;
	max.sgread=-1;
	min.sgread=101;
	cin>>n;
	for(int i=0;i<n;i++)
	{

		cin>>s.sname>>s.sno>>s.sgread;
		if(s.sgread>max.sgread)
			max=s;
		if(s.sgread<min.sgread)
			min=s;
	}
	cout<<max.sname<<" "<<max.sno<<endl;
	cout<<min.sname<<" "<<min.sno<<endl;
	return 0;
}