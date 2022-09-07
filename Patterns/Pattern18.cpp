/*
    Pattern: 
            E
            D E
            C D E
            B C D E
            A B C D E
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        char ch = 'A' + (n-1) - i;
        
        for(int j=0;j<=i;j++)
            cout<<ch++<<" ";
        
        cout<<endl;
    }
    return 0;
}
