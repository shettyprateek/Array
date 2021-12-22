#include<iostream>
#include<climits>
using namespace std;

int linear(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i+1;
        }
    }
    return -1;


}

int main()
{
    int n,key;
    cout<<"Enter the size";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key";
    cin>>key;
    cout<<linear(arr,n,key);
}