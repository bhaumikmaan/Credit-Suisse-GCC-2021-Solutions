/***  KNOWLEDGE IS POWER  ***/

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
int totalPairs(int n, vector<int>& values) {
    int cnt = 0 , ans ;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {     
            if(j == i + 1)
            {
                cnt++ ;
                ans = 0 ;
            }
            else
            {
                ans = max(values[j - 1] , ans) ;
                if(ans >= values[i])
                {
                    break ;
                }
                if(ans >= values[j])
                {
                    continue;
                }
                cnt++ ;
            }
        }
    }
    return cnt ;
}

int main(){
   int n;
   cin >> n;
   vector<int> values(n);
   for (int i = 0; i < n; ++i) {
        cin >> values[i];
   }
	int answer = totalPairs(n, values);
    // Do not remove below line
    cout << answer << endl;
    // Do not print anything after this line
        
    return 0;
}
// 98 / 100
