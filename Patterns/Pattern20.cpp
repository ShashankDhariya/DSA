/*
    Pattern: 
            *        *
            **      **
            ***    ***
            ****  ****
            **********
            ****  ****
            ***    ***
            **      **
            *        *
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    n >>= 1;
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(j<=i)
                cout<<"*";
            else
                cout<<" ";
        }
        
        for(int j=0;j<n;j++){
            if(j<(n-1)-i)
                cout<<" ";    
            else 
                cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-1;j++){
            if(j < n-1-i)
                cout<<"*";
            else 
                cout<<" ";
        }
        cout<<"  ";
        for(int j=0;j<n-1;j++){
            if(j<i)
                cout<<" ";    
            else 
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

