#include <iostream>
#include <vector>
using namespace std;

int cha_abs(int a,int b){ //��ľ���ֵ
	if (a>=b)
	{
		return a-b;
	} 
	return b-a;
}
int main(){
	int c; //��
	int r=1; //��
	int number,count;
	while (cin>>c && c)
	{
		int m[1000][3]={0};
		int i,j=0,k;
		int countnum=0;
		while (cin>>number>>count && (number || count))
		{
			m[j][0]=1; //��ʾ������
			m[j][1]=number; //��ֵ
			m[j][2]=count; //����	
			j++;
			countnum+=count;
		}
		cout<<"���� ��"<<j<<endl;
		cout<<"�������� ��"<<countnum<<endl;
		cout<<"���� ��"<<countnum/c<<endl;
		
		for (i=0;i<j;i++)
		{
			cout<<m[i][1]<<" , "<<m[i][2]<<endl;
		}
		vector<vector<int> > res;
		
        res.resize(countnum/(c));//r��
        for (k = 0; k < countnum/(c); ++k){
            res[k].resize(c);//ÿ��Ϊc��
        }

		vector<vector<int> > res1;
		
        res1.resize(countnum/(c));//r��
        for (k = 0; k < countnum/(c); ++k){
            res1[k].resize(c);//ÿ��Ϊc��
        }


		int zong=1;
		int s=0;
		//����mװ����άvector��
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
		//�������
		cout<<"Input:"<<endl;
		for (i=0;i<countnum/(c);i++)
		{
			for (k = 0; k < c; ++k){
				
				cout<<res[i][k]<<"\t";
			}			
			cout<<endl;
			
		}

		//�Զ�ά����������
		/*
		 * ���㷽����ÿ�������9��ֵ�������ֵ��ȡ��󣬸�ֵ��ȥ
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
				
				//���ԭֵ����max
				res1[i][k]=max;
			}						
		}
		
		//�������
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