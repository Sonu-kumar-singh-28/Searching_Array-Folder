#include<iostream>
#include<vector>
using namespace std;

int findbinary( vector<int>arr, int size, int target)
{
    int start =0; 
    int end =size-1;

    int mid = start +(end-start) /2;

    while( start <= end)
    {
        int element = arr[mid];

        if( element == target)
        {
            return mid;
        }
        else if(target< element)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }

        mid = start +(end-start) /2;
    }
    return -1;
}
int main()
{
    int size;
    cout<<" Enter the size of the array:";
    cin>>size;

    vector<int>arr(size);

    for( int i=0; i<arr.size(); i++)
    {
        cout<<" Enter The element of the array:";
        cin>>arr[i];
    }

    int target ;

    cout<<" Enter the target you find:";
    cin>>target;

    int binarysearch = findbinary(arr, size, target);

    if(binarysearch == -1)
    {
        cout<<" Element not found";
    }

    else{
        cout<<" Element found at " << binarysearch << " index" << endl;
    }

}