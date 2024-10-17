// Matrix Addition
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][3]={{2,3,5},{4,4,6}};
    int arr1[2][3]={{6,7,7},{5,7,7}};
    int sum[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr[i][j] + arr1[i][j];
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}