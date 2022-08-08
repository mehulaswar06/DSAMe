#include <bits/stdc++.h>

using namespace std;

int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key=8;
    // int count=-1;

    // for(int i=0;i<n;i++){
    //     if(key==arr[i]){
    //         count=i;
            
    //     }
    // }

    // if(count=-1){
    //     cout<<"Element not found";
    // }
    // else{
    //     cout<<"Element found at:"<<count<< " position"<<endl;
    // }
    cout<<linearsearch(arr,n,key);
    return 0;
}