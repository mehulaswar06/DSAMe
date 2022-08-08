#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);  //to get the whole line as input
    cin.ignore();

    int i=0;
    int currlen=0, maxLen=0;
    int st=0,maxst=0; //index of currlength


    while(1){
        if(arr[i]=='\0' || arr[i]==' '){
            if(currlen>maxLen){
                maxLen=currlen;
                maxst=st;
            }
            currlen =0;
            st=i+1;

        }
        else
        currlen++;
        if(arr[i]=='\0'){
            break;
        }
        i++;
}
    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++){
        cout<<arr[i+maxst];
    }
}