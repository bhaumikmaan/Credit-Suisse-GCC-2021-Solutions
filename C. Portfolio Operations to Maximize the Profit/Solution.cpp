/***  KNOWLEDGE IS POWER  ***/

#include <bits/stdc++.h>
using namespace std;

int portfolio_profit_maximisation(int maxSum, vector<int> a, vector<int> b) {
    //write your code here
    int sum = 0 , k = maxSum , n=a.size() , m = b.size() ;
    set<pair<int,int>> s ;
    int ans = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        sum += a[i] ;
        s.insert({sum,i}) ;
        if(sum <= k)
        {
            ans = max(ans , i+1) ;
        }
    }
    sum = 0 ;
    for(int i = 0 ; i < m ; i++)
    {
        sum += b[i] ;
        if(sum <= k)
        {
            ans = max(ans , i + 1) ;
        }
        int rem = k - sum ;
        pair<int,int> curr = {rem + 1 , -1} ;
        auto x = s.lower_bound(curr) ;
        if(x == s.begin())
        {
            continue;
        }
        x-- ;
        pair<int,int> fl = *x ;
        int curr2 = fl.second + i + 2 ;
        ans = max(ans , curr2) ;
        
    }
    return ans ;
}

int main()
{
    ios::sync_with_stdio(false);

    int n, m, x;
    cin >> n >> m >> x;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m ; ++i) {
        cin >> b[i];
    }
    int result = portfolio_profit_maximisation(x, a, b);
    cout << result;
    return 0;
}
