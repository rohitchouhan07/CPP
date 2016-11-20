#include <iostream>
using namespace std;
int main()
{
  int x,i,p=1;
  cout<<"Enter the Number whose factorial is to be found"<<endl;
cin>>x;
i=x;
do {
  p=p*i;
  i--;
}while (i>0);
cout<<"The factorial of "<<x<<" is "<<p<<endl;
return 0;
}

