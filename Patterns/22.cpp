/*
    Pattern:
            4 4 4 4 4 4 4 
            4 3 3 3 3 3 4 
            4 3 2 2 2 3 4 
            4 3 2 1 2 3 4 
            4 3 2 2 2 3 4 
            4 3 3 3 3 3 4 
            4 4 4 4 4 4 4 
*/

#include<bits/stdc++.h>
using namespace std;
 
void pattern(int n){
    int a = n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a - min(i,j)<<" ";
        }
        for(int j=0;j<n-1;j++){
            cout<<a - min(i,n-2-j)<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            cout<<a - min(n-2-i,j)<<" ";
        }
        for(int j=0;j<n-1;j++){
            cout<<a - min(n-2-i,n-2-j)<<" ";
        }
        cout<<endl;
    }
}
 
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    pattern(n);
    return 0;
}
