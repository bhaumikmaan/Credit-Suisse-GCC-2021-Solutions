/***  KNOWLEDGE IS POWER  ***/

#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <queue>
#include <sstream>
#include <typeinfo>
#include <bits/stdc++.h>
using namespace std;
 
int securitiesBuying(int n , int z,int security_value[])
{
    int no_of_stocks=0;
    vector<pair<int,int>> v ;
    int c = 1 ;
    for(int i = 0 ; i < n ; i++)
    {
    	v.push_back({security_value[i] , c}) ;
    	c++ ;
    }
    sort(v.begin() , v.end()) ;
    int ans = 0 ;
    for(int i = 0 ; i < v.size() ; i++)
    {
    	int p = v[i].first ;
    	int x = v[i].second ;
    	int r = z/p ;
    	r = min(r , x) ;
    	ans += r ;	
    	z -= r*p ;
    }
    no_of_stocks = ans ;
    return no_of_stocks;
}
 
int main(){
 
int z;
cin>>z;
vector<int> input_data;
string buffer;
int data;
getline(cin, buffer);
getline(cin, buffer);
istringstream iss(buffer);
 
 
while (iss >> data)
    input_data.push_back(data);
 
int n= input_data.size();
 
 
 int security_value[n];
    for (int i = 0; i < n; i++) {
        security_value[i] = input_data[i];
    }
 
 
 
int no_of_stocks_purchased = securitiesBuying(n , z,security_value);
cout << no_of_stocks_purchased;
 
 
 
}
