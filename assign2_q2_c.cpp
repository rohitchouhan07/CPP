#include<iostream>
using namespace std;
int main()
{
	int i, j;
	char ch='A';
	for(i=0; i<5; i++)
	{
		for(j=0; j<=i; j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<"\n";
	}
return 0;
}

