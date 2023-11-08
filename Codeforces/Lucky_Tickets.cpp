#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define ss second
#define pb  push_back
 
int main()
{
    int n;
    cin>>n;
 
    vector<string> v(n);
    for(auto &e: v)     cin>>e;
 
    ll int ans = 0;
 
    vector<map<int, int>> mp(6);
 
    vector<pair<int, string>> vs;
    for(auto e: v)      vs.pb({e.size(), e});
 
    sort(vs.begin(), vs.end());
    v.clear();
    for(auto e: vs)     v.pb(e.ss);
 
    for(auto s: v)
    {
        int tot = 0;
 
        for(auto d: s)
            tot += (d - '0');
 
        int a=0, b=0;
 
        for(int len=s.size()+2-s.size()%2; len<=10; len+=2)
        {
            if(len > 2*s.size())        break;
 
            a=0, b=0;
 
            for(int i=0; i<s.size()-len/2; i++)
            {
                a += s[i]-'0';
                b += s[s.size()-i-1]-'0';
            }
 
            ans += mp[len-s.size()][tot-2*a];
            ans += mp[len-s.size()][tot-2*b];
        }
 
        mp[s.size()][tot]++;
        ans++;
    }
 
    cout<<ans<<"\n";
}
