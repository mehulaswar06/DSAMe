#include <iostream>
#include<cmath>

using namespace std;


int main(){
    int n;
    cin>>n;

    bool flag;

    for(int i =2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"Number is Non-Prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Number is Prime";
    }
}