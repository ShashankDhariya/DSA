/*
    Pattern: 
            A
            AB
            ABC
            ABCD
            ABCDE
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<=i;j++){
            cout<<ch++;
        }
        cout<<endl;
    }
    return 0;
}
