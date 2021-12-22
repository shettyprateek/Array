#include<iostream>
#include<climits>
using namespace std;

int binary(int arr[],int n,int key)
{
    int b=0;
    int e=n;
    while(b<=e)
    {
        int mid=(b+e)/2;
        if(arr[mid]==key)
            return mid+1;
        else if(arr[mid]<key)
            b=mid+1;
        else
            e=mid-1; 

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
    cout<<binary(arr,n,key);
}