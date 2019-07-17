#include <iostream>
using namespace std;

int main(){
	int n,failA=0,failB=0;
	cin>>n;
	while (n--)
	{
		int a1,b1,a2,b2;
		cin>>a1>>a2>>b1>>b2;
		if (a1+b1==a2 && a1+b1!=b2)
		{
			//aӮ
			failB++;
		}else if (a1+b1!=a2 && a1+b1==b2)
		{
			//bӮ
			failA++;
		}
	}
	cout<<failA<<" "<<failB<<endl;
	return 0;
}