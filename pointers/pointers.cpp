#include <bits/stdc++.h>

using namespace std;


int main(){
    // int a=10;

    // int *ptr=&a;
    // cout<<ptr<<endl;

    // cout<<*ptr<<endl;
    // ptr++;
    // cout<<ptr<<endl;
    // return 0;


    //POINTERS AND ARRAYS

    int arr[]={10,20,30,40};

    //arr behaves in the same way as pointers
    //arr points to base address of array

    // int *ptr=arr;
    // for(int i=0;i<4;i++){
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }
    
    for(int i=0;i<4;i++){
        cout<<*(arr+i)<<endl;
        //arr++; IS NOT ALLOWED WILL GIVE ERROR
    }

    //POINTER TO POINTER
    

    return 0;
}