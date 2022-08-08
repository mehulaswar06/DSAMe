#include <bits/stdc++.h>

#include<string>  //to use string in program

using namespace std;


int main(){
    // string str;

    // cin>>str;
    // cout<<str;

    //DIFFERENT WAYS OF INPUTING STRING
    // string str1(5,'n');
    // cout<<str1;

    // string str ="MehulAswar" ; // no space as it will be done by getline
    // cout<<str;

    // to get full line as a input 

    string str;
    getline(cin,str);  // to get full line as input
    cout<<str;
    return 0;
}