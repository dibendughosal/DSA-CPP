// Print matrix diagonal 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
            if(i==j){
                cout<<a[i][j];
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    int k = 2;
        for (int i = 0; i < 3; i++)
        {
            cout<<a[i][k]<<" ";
            k--;
        }
    
        
}