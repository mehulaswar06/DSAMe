#include<bits/stdc++.h>

using namespace std;

int fib(int n){  
    
    if(n==0){
        return 0;
    } //nth fibonacci number
    else if(n==1){
        return 1;
    }
     int num=fib(n-1)+fib(n-2);
     return num;

}

int main(){
int n;
cin>>n;

cout<<fib(n)<<endl;



}