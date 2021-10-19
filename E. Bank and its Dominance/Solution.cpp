/***  KNOWLEDGE IS POWER  ***/


using namespace std;
#include <string>
#include <vector>
#include <iostream>

string solution(string s){
    // code here
    vector<int> v;
    int curr = 0 ;
    for (char c : s)
    {
        if (c == '1')
        {
            v.push_back(curr) ;
            curr = 0 ;
        }
        else
        {
            curr++ ;
        }
    }
    v.push_back(curr) ;
    sort(v.begin(), v.end());
    int a = (v[v.size() - 1] + 1) / 2 ;
    if (v.size() >= 2 && v[v.size() - 2] >= a)
    {
        return "B";
    }
    if (v[v.size() - 1] & 1)
    {
        return "A";
    }
    else
    {
        return "B";
    }
}

/*  Do not edit below code */
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  string  n;
  cin >> n;	
  string answer=solution(n);
  cout << answer << endl;	
}
