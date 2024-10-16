//Find Pair with Given sum
#include<iostream>
using namespace std;
int main(){
    int a[7] = {1,4,2,3,6,5,8};
    int value = 7;
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j++)
        {
            if(a[i]+a[j]==value){
                count++;
            }
        }
        
    }
    cout<<"The Pair with Given Sum "<<value<<" is = "<<count<<endl;
    
}