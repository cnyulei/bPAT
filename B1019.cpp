#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

vector<int> shu;

void inputNumber(string N){
	int i=0;
	for (i=0;i<N.length();i++)
	{
		shu.push_back(int(N[i]));
	}
}
int compare(int x,int y){
	return x>y;
}
int change(vector<int> &s,int &res1,int &res2){
	vector<int>::iterator it = shu.begin();
	sort(it,it+4,compare);
	res1=s[0]*1000+s[1]*100+s[2]*10+s[3];
	res2=s[0]+s[1]*10+s[2]*100+s[3]*1000;
	int result=res1-res2;
	string res;
    stringstream ss;
    ss << result;
    ss >> res;
	inputNumber(res);
	cout<<"res is "<<res<<endl;
	return result;
}
int main(){
	string N;
	int num1,num2;
	cin>>N;
	inputNumber(N);
	int x=change(shu,num1,num2);
	cout<<x<<endl;
	while(x){
		if (x==6174)
		{
			cout<<"End";
			break;
		}else{
			//x·Å½øvectorÖĞ
			string res;
			stringstream ss;
			ss << x;
			ss >> res;
			inputNumber(res);
			x=change(shu,num1,num2);
		}
	}
	
	return 0;
}
