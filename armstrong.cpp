#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,dup,id;
    int revNum = 0;
    cin>>num;
    dup = num;
    int sum =0;
    while(num > 0){
        id = num % 10;
        sum = sum + (id*id*id);
        num /= 10;
    }
    if (sum == dup) cout<<sum<<" is an Armstrong Number";
    else cout<<sum<<" is not an Armstrong Number";
    
}