#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	int a[15];
	int i,j,m=0,k,num,c,tmp;
	cout<<"enter";
	cin>>a[0];
	for(i=1;i<5;i++)
	{
		cin>>a[i];
		for(j=0;j<i;j++)
		{
			if(a[i]!=a[j])
			{
				continue;
			}
			else
			{
				cout<<"give another number";
				a[i]='\0';
				cin>>a[i];
			}
		}
	}
	
	
	
    
    

	
		
	




