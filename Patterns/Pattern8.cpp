/*
    Pattern: 
            *********
             *******
              *****
               ***
                *
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j)
                cout<<" ";
            else 
                cout<<"*";
        }
    
        for(int j=0;j<(n-1)-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
