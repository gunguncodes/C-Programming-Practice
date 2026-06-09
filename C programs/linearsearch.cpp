#include<iostream>
using namespace std;

int Linearsearch(int arr[],int sz,int target)
{
    for(int i=0;i<sz;i++)
    {
        if(arr[i]==target)
        {  
        return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={2,3,4,5,67,8,90};
    int sz = 7;
    int target = 25;

    cout<<Linearsearch(arr,sz,target)<<endl;
    return 0;
}