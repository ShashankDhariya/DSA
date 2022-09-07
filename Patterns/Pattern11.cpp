/*
    Pattern: 
            1
            0 1
            1 0 1
            0 1 0 1
            1 0 1 0 1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        int a = 0;
        if(i%2 == 0)
            a = 1;
        else
            a = 0;
        for(int j=0;j<=i;j++){
            cout<<a<<" ";
            a = abs(a-1);
        }
        cout<<endl;
    }
    return 0;
}
