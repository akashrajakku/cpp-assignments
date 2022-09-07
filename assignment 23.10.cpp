#include <iostream>

using namespace std;

int main()
{
    int a[10],i,sum=0;
    cout<<"enter 10 numbers of the array\n";
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum is "<<sum;
    
    
    return 0;
}