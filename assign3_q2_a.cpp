#include <iostream>
using namespace std;
int main()
{
  int x,i,p=1;
  cout<<"Enter the Number whose factorial is to be found"<<endl;
cin>>x;
for (i=x;i>0;i--){
  p=p*i;
}
cout<<"The factorial of "<<x<<" is "<<p<<endl;
return 0;
}

