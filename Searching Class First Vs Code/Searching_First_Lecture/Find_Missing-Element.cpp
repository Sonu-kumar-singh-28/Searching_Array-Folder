#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size;
    cout<<" Enter the size of the array :";
    cin>>size;

    vector<int>arr(size);

    for( int i=0; i<arr.size(); i++)
    {
        cout<<" Enter the element of the array :";
        cin>>arr[i];
    }

}