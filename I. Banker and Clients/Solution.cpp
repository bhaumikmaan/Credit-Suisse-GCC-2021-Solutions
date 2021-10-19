/***  KNOWLEDGE IS POWER  ***/

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

const int INF = 1e5 + 10, max_client = 21, max_banker = 11;
int allset;
vector<vector<vector<int>>> dp;
vector<vector<int>> timevec ;

int min_time_taken(int taken, int last, int client)
{
    if (client == (int)timevec[0].size())
        return 0 ;
    int ans = INF ;
    if (last != -1 && dp[taken ^ allset][client][last] != -1)
    {
        return dp[taken ^ allset][client][last] ;
    }
    for (int i = 0; i < (int)timevec.size(); i++)
    {
        if ((taken & (1 << i)) && last != i)
        {
            continue;
        }
        ans = min(ans, timevec[i][client] + min_time_taken((taken | (1 << i)), i, client + 1));
    }
    return dp[taken ^ allset][client][last] = ans;
}

int main(){
    int b,c;
    cin >> c>>b;
    int answer;
    timevec = vector<vector<int>>(b,vector<int>(c));
    for(int i = 0; i < b; i++){
        
        for(int j = 0;j < c;j++){
          cin>>timevec[i][j];
        }
    }
    allset = (1 << b) - 1 ;
    dp = vector<vector<vector<int>>>((1 << b), vector<vector<int>>(c, vector<int>(b, -1)));
    cout << min_time_taken(0, -1, 0) << "\n" ;
    return 0;
}
