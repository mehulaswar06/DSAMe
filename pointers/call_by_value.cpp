#include <bits/stdc++.h>

using namespace std;
void increment(int a){
    a++;
}

int main(){
    int a=2;

    increment(a); //here we are passing the value only and not variable 
    //this is call by value, a local variable will be created and in the function but the 
    //original variable will remain the same.
    cout<<a<<endl;

    return 0;
}