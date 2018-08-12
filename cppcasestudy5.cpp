#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0,t=0,a,b,c,sum;
	cout<<"sum";
	cin>>sum;
	cout<<"enter";
	cin>>a;
	while(t!=sum)
	{
		for(i=1;i<=sum;i++)
		{
			for(j=1;j<=sum;j++)
			{
				b=i;
				c=j;
				t=a+b+c;
			}
		}
		
	}
	cout<<"a is"<<a<<"b is"<<b<<"c is"<<c;
}
