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
    
    int x;
    cin>>x;

int r=0,c=m-1;
bool found =false;
while(r<n and c>=0){
    if(a[r][c]==x){
        found =true;
    }
    if(a[r][c]>x){
        c--;
    }
    else{
        r++;
    }
}

if(found){
    cout<<"Element Found";
}
else{
    cout<<"Element not found";
}

}