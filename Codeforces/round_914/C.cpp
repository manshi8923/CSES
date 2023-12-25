#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (k > 2)
        {
            cout << 0 << endl;
        }
        sort(v.begin(), v.end());
        if (k == 1)
        {
            ll mini=1e18;
            for (i = 0; i < n; i++)
            {
                for (ll j = i + 1; j < n; j++)
                {
                    mini=min(mini,abs(v[i]-v[j]));
                }
            }
            
            cout << mini <<endl;
        }
        else
        {

            set<ll> st;

            for (i = 0; i < n; i++)
            {
                for (ll j = i + 1; j < n; j++)
                {
                    st.insert(abs(v[i] - v[j]));
                }
            }
            ll ans = *min_element(st.begin(),st.end());
            for (auto it : st)
            {
                auto itr = st.upper_bound(it);
                if (itr != st.end())
                {
                    ans = min(ans, abs(*itr - it));
                }
                if (itr != st.begin())
                {
                    itr--;
                    ans = min(ans, abs(*itr - it));
                }
            }
            cout << ans<<endl;
        }
    }
    return 0;
}
