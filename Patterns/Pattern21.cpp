/*
    Pattern: 
            ****
            *  *
            *  *
            *  *
            ****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(i == 0 || j == 0 || i == n-1 || j == n-2)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

