#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[]={2,8,96,79};
    int s=INT_MAX;
    int ss=INT_MAX;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        if(a[i]<s)
        {
            ss=s;
            s=a[i];
        }
        else if(a[i]<ss)
        {
            ss=a[i];
        }
    }
    cout<<ss;
}