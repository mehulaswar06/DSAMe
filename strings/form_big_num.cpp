#include <bits/stdc++.h>

using namespace std;

int main(){

    string s = "64665479";

    sort(s.begin(),s.end(),greater<int>());

    cout<<s<<endl;
    return 0;
}