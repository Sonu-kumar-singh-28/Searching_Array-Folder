#include<iostream>
#include<vector>
using namespace std;


int findaccurance( vector<int>arr , int size, int target)
{
    int start =0; 
    int end = size-1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            start= mid+1;
        }
        else if( target>arr[mid])
        {
            start = mid +1;
        }
        else if( target<arr[mid])
        {
            end = mid-1;
        }
        mid = start +(end-start) / 2;
    }
    return ans;
}
int main()
{
    int size;
    cout<<" Enter the size of the array:";
    cin>>size;

    vector<int>arr(size);

    for( int i=0; i<arr.size(); i++)
    {
        cout<<"Enter the element of the array :";
        cin>>arr[i];
    }

    int target;
    cout<<" Enter the target you find:";
    cin>>target;

    int lastoccurance = findaccurance(arr,size, target);

    cout<<" The Last number is " << lastoccurance << " index" << endl;
}