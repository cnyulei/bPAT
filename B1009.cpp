#include <iostream>
#include <vector>
using namespace std;

int cha_abs(int a,int b){ //差的绝对值
	if (a>=b)
	{
		return a-b;
	} 
	return b-a;
}
int main(){
	int c; //列
	int r=1; //行
	int number,count;
	while (cin>>c && c)
	{
		int m[1000][3]={0};
		int i,j=0,k;
		int countnum=0;
		while (cin>>number>>count && (number || count))
		{
			m[j][0]=1; //表示有数据
			m[j][1]=number; //数值
			m[j][2]=count; //个数	
			j++;
			countnum+=count;
		}
		cout<<"组数 ："<<j<<endl;
		cout<<"数据总数 ："<<countnum<<endl;
		cout<<"行数 ："<<countnum/c<<endl;
		
		for (i=0;i<j;i++)
		{
			cout<<m[i][1]<<" , "<<m[i][2]<<endl;
		}
		vector<vector<int> > res;
		
        res.resize(countnum/(c));//r行
        for (k = 0; k < countnum/(c); ++k){
            res[k].resize(c);//每行为c列
        }

		vector<vector<int> > res1;
		
        res1.resize(countnum/(c));//r行
        for (k = 0; k < countnum/(c); ++k){
            res1[k].resize(c);//每行为c列
        }


		int zong=1;
		int s=0;
		//数组m装进二维vector中
		for (i=0;i<countnum/(c);i++)
		{
			for (k = 0; k < c; ++k){
				if (zong==m[s][2]+1)
				{
					zong=1;
					s++;					
				}
				res[i][k]=m[s][1];
				zong++;
			}
		}
		//输出数据
		cout<<"Input:"<<endl;
		for (i=0;i<countnum/(c);i++)
		{
			for (k = 0; k < c; ++k){
				
				cout<<res[i][k]<<"\t";
			}			
			cout<<endl;
			
		}

		//对二维数据做运算
		/*
		 * 计算方法，每个点计算9个值，求绝对值，取最大，赋值回去
		 */

		for (i=0;i<countnum/(c);i++)
		{
			for (k = 0; k < c; ++k){
				//res[i][k]
				int max=0;
				//1
				if (i-1>=0 && k-1>=0)
				{
					max = cha_abs(res[i-1][k-1],res[i][k]);
				}
				//2
				if (i-1>=0 && k>=0)
				{
					int stemp = cha_abs(res[i-1][k],res[i][k]);
					if (stemp>max)
					{
						max=stemp;
					}
				}
				//3
				if (i-1>=0 && k+1<c)
				{
					int stemp = cha_abs(res[i-1][k+1],res[i][k]);
					if (stemp>max)
					{
						max=stemp;
					}
				}
				//4
				if (i>=0 && k-1>=0)
				{
					int stemp = cha_abs(res[i][k-1],res[i][k]);
					if (stemp>max)
					{
						max=stemp;
					}
				}
				//6
				if (i>=0 && k+1<c)
				{
					int stemp = cha_abs(res[i][k+1],res[i][k]);
					if (stemp>max)
					{
						max=stemp;
					}
				}
				//7
				if (i+1<countnum/(c) && k-1>=0)
				{
					int stemp = cha_abs(res[i+1][k-1],res[i][k]);
					if (stemp>max)
					{
						max=stemp;
					}
				}
				//8
				if (i+1<countnum/(c) && k>=0)
				{
					int stemp = cha_abs(res[i+1][k],res[i][k]);
					if (stemp>max)
					{
						max=stemp;
					}
				}
				//8
				if (i+1<countnum/(c) && k+1<c)
				{
					int stemp = cha_abs(res[i+1][k+1],res[i][k]);
					if (stemp>max)
					{
						max=stemp;
					}
				}
				
				//最后，原值等于max
				res1[i][k]=max;
			}						
		}
		
		//输出数据
		cout<<"Output:"<<endl;
		for (i=0;i<countnum/(c);i++)
		{
			for (k = 0; k < c; ++k){
				
				cout<<res1[i][k]<<"\t";
			}			
			cout<<endl;
			
		}
	}
	return 0;
	
}