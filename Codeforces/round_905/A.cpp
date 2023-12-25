// //Morning
// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int count=0;
//         for(int i=1;i<s.length();i++){
//             if(s[i]=='0'){
//                 count+=abs(10-(s[i]-'0'));
//             }
//             else{
//                 count+=abs((s[i]-'0')-(s[i-1]-'0'));
//             }
//         }
//         cout<<count+4<<endl;
//     }
//     return 0;
// }
