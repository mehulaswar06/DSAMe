#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i =0;i<n;i++){
        int curr= arr[i];
        int j=i-1;
        while(arr[j]>curr){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}