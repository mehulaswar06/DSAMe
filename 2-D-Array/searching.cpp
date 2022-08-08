#include <bits/stdc++.h>

using namespace std;

int main(){

    int m,n;

    cin>>m>>n;

    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
        
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    int x;
    cin>>x;
    bool flag=false;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(a[i][j]==x){
            cout<<i<<" "<<j<<endl;
            flag=true;
           }
        }
        
    }

    if(flag){
        cout<<"Element Found"<<endl;

    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}