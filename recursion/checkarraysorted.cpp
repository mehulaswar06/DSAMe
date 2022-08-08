#include <bits/stdc++.h>

using namespace std;

bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    int arraysorted = sorted(arr+1,n-1);

    return (arr[0]<arr[1] && arraysorted);
}

int main()
{
    int arr[]={5,4,3,2,10};

    cout<<sorted(arr,5)<<endl;

    
    return 0;
}