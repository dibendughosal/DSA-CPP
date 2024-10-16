//Find the Maximum Element.
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {12,3,7,8,15};
    int mx = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] > mx){
            mx = arr[i];
        }
    }
    cout<<"The Maximum Element is = "<< mx <<endl;
    
}