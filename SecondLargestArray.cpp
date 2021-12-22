#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[]={2,78,96,79};
    int l=INT_MIN;
    int sl=INT_MIN;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl)
        {
            sl=a[i];
        }
    }
    cout<<sl;
}