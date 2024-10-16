#include<iostream>
using namespace std;
int main(){
    int arr[5] = {12,14,4,7,9};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"The Sum of Array Element is = "<<sum<<endl;
    return 0;
}