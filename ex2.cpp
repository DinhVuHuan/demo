#include <iostream>
using namespace  std;
int main()
{
    int n,i;
    double sum;
    sum=1;
    cout<<"n= "; cin>>n;
    for (i=2;i<=n;i++)
    {
        sum=sum+1.0*i/(i-1);
    }
    cout<<sum;
 return 0;
}