#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	char s[34];
	int l, c = 0, max = -1;
	cout<<"enter the string";
	
	l = strlen(s);
	for(int i = 0 ; i < l ; i++){
		if(s[i] != ' '){
			c++;
		}
		else{
			if(c > max) max = c;
			c = 0;
		}
	}
	if(c > max) 
		max = c;
 
	cout<<"Length: %d\n", max;
	return 0;
}
