#include <iostream>
using namespace std;
int main()
{int i;
float sum=0,ave,x[5];
for (i=0;i<5;i++){
  cout<<"Enter the Numbers"<<endl;
  cin>>x[i];
  sum=sum+x[i];
}
ave=sum/5;
cout<<"The average of the five numbers is "<<ave<<endl;
return 0;
}

