/*
    Pattern: 
            1      1
            12    21
            123  321
            12344321
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++)
            if(j<=i)
                cout<<j+1;
            else 
                cout<<" ";
            
        for(int j=0;j<n;j++){
            if(j < (n-1)-i)
                cout<<" ";
            else 
                cout<<n-j;
        }
        cout<<endl;
    }
    return 0;
}
