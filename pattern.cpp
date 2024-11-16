#include<bits/stdc++.h>
using namespace std;
print1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for(int k=0; k < 2*i+1; k++){
            cout<<"*";
        }
        for (int l = 0; l < n-i-1; l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
}
print2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < 2*n -(2*i+1); j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
        
        
    }
    
}
print3(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        // for(int j=0;j<n-1;j++){
        //     cout<<" ";
        // }
        cout<<endl;
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
        
    }
    
    
}
print4(int n){
    int start =1;
    for (int i = 0; i < n; i++)
    {
        
        if(i%2==0) start=1;
        else start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
        
    }
    
}
print5(int n){
    int space = 2*(n-1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
         for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
         for (int j = i; j >= 1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        space -=2;
    }
    
}
print6(int n){
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<p<<" ";
            p++;
        }
        cout<<endl;
    }
    
}
print7(int n){
    
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
        
    }
    
}
print8(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n-i; j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    
}
print9(int n){
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
        
    }
    
}
print10(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n -i -1); ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}
print11(int n){
    
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0;j <= i; j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}
print12(int n){
    for (int i = 0; i < n; i++)
    {
        //Space
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
    //Characters
    char ch='A';
    int breakpoint = (2*i+1) / 2;
        for (int j = 0; j < 2*i + 1; j++)
        {
            cout<<ch;
            if(j <= breakpoint) ch++;
            else ch--;  
        }
        //Space
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    
}
print13(int n){
    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
print14(int n){
    int iniSpace = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < iniSpace; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        iniSpace += 2;
        cout<<endl;
        
    }
    
    for (int i = 1; i <= n; i++)
    {
        iniSpace = (n*2)-(i+i);
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= iniSpace; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        iniSpace -= 2;
        cout<<endl;
        
    }
    
    
}
print15(int n){
    int iniSpace = (2*n) - 2;
    for (int i = 1; i <= 2*n-1; i++)
    {
        int star = i;
        if(i>n) star = 2*n - i;
        for (int j = 1; j <= star; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= iniSpace; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i<n) iniSpace -= 2;
        else iniSpace += 2;
        
        
        
    }
    
}
int main(){
    int t;
    int n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        print15(n);
    }

}