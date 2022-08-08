#include <iostream>
#include <math.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    

    int sum = 0;
    int num=n;
    while(n>0){
        int lastDigit = n%10;
        sum+= pow(lastDigit,3);
        n=n/10;
    }

    if(sum == num){
        cout<<"It is an Armstrong Number"<<endl;
    }
    else{
        cout<<"It is not"<<endl;
    }
    return 0;
}