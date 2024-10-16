// Count Even Element in  an array
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,4,5,7,8,9,10,11,13,14};
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]%2==0){
            count++;
        }
    }
    cout<<"The Number of Even Elements = "<<count<<"."<<endl;
    
}