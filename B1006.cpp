#include <iostream>
using namespace std;

int main()
{
	int n,i;
	int B,S,G; //百位，十位，个位
	cin>>n;
	B=n/100;
	S=(n-B*100)/10;
	G=n-B*100-S*10;
	for(i=0;i<B;i++)
		cout<<"B";
	for(i=0;i<S;i++)
		cout<<"S";
	for(i=1;i<=G;i++)
		cout<<i;
	cout<<endl;
	return 0;
}