/***  KNOWLEDGE IS POWER  ***/

using namespace std;
#include <string>
#include <iostream>

int solution(int n){
    int x ;
    if(n%3 == 0)
    {
    	x = n/3 + n/3 ;
    }
    else
    {
    	x = (n/3 + 1) + n/3 ;
    }
    return x ;
}

/*  Do not edit below code */
int main() {
	int n;
	cin >> n;	
    int answer=solution(n);
	cout << answer << endl;	
}
