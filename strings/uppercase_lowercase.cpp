#include <bits/stdc++.h>

using namespace std;

int main(){

    // string s1="JIGGIERGIERGIR";

    

    //cout<< 'a'-'A';   //gives us 32 means lower is 32 ahead of upper

    //CONVERT TO UPPERCASE

    //BY SUBTRACTING 32 FROM LOWERCASE;

    // for(int i=0;i<s1.size();i++){
    //     if(s1[i]>='a' && s1[i]<'z'){
    //         s1[i]-=32;
    //     }
    // }
    // cout<<s1;
    //CONVERT TO LOWERCASE

    //BY ADDING 32 TO UPPERCASE;

//     for(int i=0;i<s1.size();i++){
//         if(s1[i]>='A' && s1[i]<'Z'){
//             s1[i]+=32;
//         }
//     }
//     cout<<s1;
// 
      string s = "iufhiuewhf";

      transform (s.begin(), s.end(),s.begin(),::toupper);
      cout<<s<<endl;
        string s1="KLNEFKLNEW";
      transform (s1.begin(), s1.end(),s1.begin(),::tolower);
      cout<<s1<<endl;
}