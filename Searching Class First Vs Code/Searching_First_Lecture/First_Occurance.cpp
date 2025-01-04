#include<iostream>
#include<vector>
using namespace std;


int firstoccurance( vector<int>arr, int size, int target)
{
    int start =0;
    int end =size-1;

    int mid = start +( end-start)/2;
    int ans = -1;

    while( start <= end)
    {
        if(arr[mid]== target)
        {
            ans = mid;
            end= mid-1;
        }
        else if( target>arr[mid])
        {
            start = mid+1;
        }
        else if( target<arr[mid])
        {
            end = mid-1;
        }
        mid = start +( end-start) /2;
    }
    return ans;
}
int main()
{
    int size;
    cout<<": Enter the size of the array :";
    cin>>size;

    vector<int>arr(size);
    
    for( int i=0; i<arr.size(); i++)
    {
        cout<<" Enter  the element of the arraY:";
        cin>>arr[i];
    }

    int target;
    cout<<" Enter the number you find:";
    cin>>target;

    int indexoffirstocc = firstoccurance(arr,size,target);
    
    cout<<"Ans Is:" << indexoffirstocc<<" index" << endl; 
}