#include <bits/stdc++.h>

using namespace std;

int setbit(int n ,int pos){
    return ((n & (1<<pos))!=0);
}

void unique2(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum =xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setBit=0;
    int pos=0;
    while(setBit!=1){        //what is the position of rightmost set bit
        setBit =xorsum & 1;
        pos++;
        xorsum = xorsum >>1;
    }
    int newxor=0;
    for (int i = 0; i < n; i++)
    {
        if(setbit(arr[i],pos-1)){
            newxor=newxor^arr[i];
        }
        
    }

    cout<<newxor<<endl;
    cout<<(newxor^tempxor)<<endl;
    
}


int main(){
    int arr[]={1,2,3,1,2,3,5,7};

    unique2(arr,8);
    return 0;

}