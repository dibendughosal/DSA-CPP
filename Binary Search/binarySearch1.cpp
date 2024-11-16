#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int s = 0;
    int e = n-1;
    cout<<"enter The Size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int val;
    cout<<"Enter the Number to search = ";
    cin>>val;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid] < val){
            s = mid + 1;
        }
        else if(arr[mid]>val){
            e = mid-1;
        }
        else{
            return mid;
        }
        return -1;
    }
    
}