#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[50];
	int l,i,c;
	gets(a);
	l=strlen(a);
	
	for(i=0;i<=l;i++)
	{
		if(a[i]=='q'&&a[i+1]=='u')
		{
			a[i]='k';
			a[i+1]='w';
		}
	    if(a[i]=='c'&&a[i-1]==32)
		{
			a[i]='k';
		}
		if(a[i]=='e'&&a[i+1]=='e')
		{int j;
			a[i]='i';
			j=i;
			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		}
		if(a[i+1]==32&&a[i]=='y')
		{
			a[i]='i';
		}
	 	if(a[i]=='a'&&a[i+1]=='t'&&a[i+2]=='e')
	 	{ 
		 int k;
	 	 a[i]='8';
	 	 k=i;
	 		for (c = k+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
            	int m;
            	m=i+1;
            		for (c = m; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
            
		 }
	 	if((a[i]==a[i+1])&&a[i]!='e'&&a[i]!='o')	
	 	{int j=i;
	 			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		 }
	 	if(a[i]=='e'&&a[i+1]=='a'&&a[i+2]=='s')	
	 	{
	 		a[i+1]='i';
	 		a[i+2]='s';
	 		int j=i;
	 			for (c = j; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		 }
		 if(a[i]=='o'&&a[i+1]=='t'&&a[i+2]=='e')
		 {
		 	a[i]='o';
		 	a[i+1]='w';
		 	a[i+2]='t';
		 }
		 if((a[i]=='a'||a[i]=='o'||a[i]=='u')&&(a[i+1]=='t'))
		 {
		 	a[i]='@';
		 	int j=i;
	 			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		 }
		 if(a[i]=='o'&&a[i+1]=='o')
		 {
		 	a[i]='u';
		 	int j;
		 	j=i;
	 			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		 }
		 if((a[i]=='e'||a[i]=='i')&&a[i+1]=='x')
		 {
		 	a[i]='x';
		 		int j;
		 	j=i;
	 			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		 }
		 if((a[i]=='e'||a[i]=='l')&&(a[i+1]=='l')&&a[i-1]!=32)
		 {
		 	a[i]='l';
		 		int j;
		 	j=i;
	 			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		 	 
		 }
		 if(a[i]=='c'&&a[i+1]=='k')
		 {
		 	a[i]='k';
		 		int j;
		 	j=i;
	 			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		 }
		 if(a[i]=='s'&&a[i+1]=='h')
		 {
		 	a[i+1]='y';
		 }
		 if(a[i]=='o'&&a[i+1]=='u')
		 {
		 	a[i]='a';
		 	a[i+1]='w';
		 }
		 if(a[i]=='k'&&a[i+1]=='s')
		 {
		 	a[i]='x';
			 	int j;
		 	j=i;
	 			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
        }
        if(a[i]=='c'&&a[i+1]=='t'&&a[i+2]=='s')
        {
        	a[i]='x';
        	int k;
        	 k=i;
	 		for (c = k+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
            	int m;
            	m=i+1;
            		for (c = m; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		}
		if(a[i]=='t'&&a[i+1]=='h'&&a[i+2]=='e')
		{
			a[i]='d';
			 int k;
			 k=i;
	 		for (c = k+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
            	int m;
            	m=i+1;
            		for (c = m; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		}
		
			if(a[i]=='t'&&a[i+1]=='h'&&a[i+2]=='a')
		{
			a[i]='d';
			 int k;
			 k=i;
	 		for (c = k+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
            	int m;
            	m=i+1;
            		for (c = m; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		}
		if((a[i]=='d')&&(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'))
		{
			a[i]='d';
			int j;
		 	j=i;
	 			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
			
		}
				if((a[i]=='i'||a[i]=='e')&&(a[i+1]=='f')&&(a[i-1]!=32)&&(a[i+2]!='e'))
		{
			a[i]='f';
			int j;
		 	j=i;
	 			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		}
	
			if((a[i]=='i'||a[i]=='e')&&(a[i+1]=='f')&&(a[i-1]!=32)&&(a[i+2]=='e'))
		{
			a[i]='y';
			a[i+1]='f';
			int j;
		 	j=i+1;
	 			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		}
		if(a[i]=='o'&&a[i+1]=='v'&&a[i+2]=='e')
		{
			a[i]='u';
			a[i+1]='v';
				int j;
		 	j=i+1;
	 			for (c = j+1; c < l; c++)
			{
			
         a[c] = a[c+1];
            }
		}
		if((a[i]=='a'||a[i]=='u'||a[i]=='e')&&(a[i+1]='r'))
		{
		a[i]='r';
		
		}
		 }
	
	
	puts(a);
	
}
