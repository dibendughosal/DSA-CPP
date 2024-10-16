// Reverse an Array using Extra Space.
#include<iostream>
using namespace std;
int main(){
    int a[5] = {11,12,13,14,17};
    int b[5];
    int j=0;
    for (int i = 4; i >= 0; i--)
    {
        b[j] = a[i];
        j++;
    }
    cout<<"the reverse element: ";
    for (int j = 0; j < 5; j++)
    {
        cout<<b[j]<<" ";
    }
    
    
}