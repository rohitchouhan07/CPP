#include <iostream>
using namespace std;
int main()
{
    int rows,i,j,space;
    for(i=4;i>=1;--i)
    {
        for(space=0;space<4-i;++space)
           cout<<"  ";
        for(j=i;j<=2*i;++j)
           cout<<"& ";
        for(j=0;j<i-1;++j)
           cout<<"& ";
        cout<<endl;
    }
    return 0;
}
