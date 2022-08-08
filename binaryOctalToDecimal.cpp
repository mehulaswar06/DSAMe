#include <bits/stdc++.h>

using namespace std;

//Binary to Decimal

// int binarytoDecimal(int n){
//     int ans=0;

//     int x= 1;

//     while (n>0){
//         int y = n%10;

//         ans += x*y;
//         n=n/10;
//         x=x*2;
//     }
//     return ans;
// }

//Decimal to Binary

int octaltoDecimal(int n){
    int ans=0;

    int x= 1;

    while (n>0){
        int y = n%10;

        ans += x*y;
        n=n/10;
        x=x*8;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<octaltoDecimal(n)<<endl;
    
}