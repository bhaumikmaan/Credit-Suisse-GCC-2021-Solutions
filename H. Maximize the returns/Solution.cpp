/***  KNOWLEDGE IS POWER  ***/

#include <bits/stdc++.h>

using namespace std;
void rec(vector<int> returns, int data[], int start, int end, int index, int k,int *temp,int d,int m){
    if(index == k)
    {
        int x = 0 ;
        int multiplier[end+1] ;
        for(int i = 0 ; i <= end ; i++)
        {
            multiplier[i] = 1 ;
        }
        for(int i = 0 ; i < k ; i++)
        {
            multiplier[data[i]] = 0 ;
            for(int j = 1 ; j <= d && j <= end - data[i] ; j++)
            {
                multiplier[data[i]+j] = m ;
            }
        }
        for(int i = 0; i <= end ; i++)
        {
            x += returns[i]*multiplier[i] ;
        }
        *temp = max(*temp , x) ;
        return ;
    }

    for(int i = start; i <= end && end - i + 1 >= k - index ; i++)
    {
        data[index] = i ;
        rec(returns,data,i+1,end,index+1,k,temp,d,m);
    }
}
void calculate(int n, int k, int d, int m, vector<int> returns,int *temp){
    int data[k];
    rec(returns, data, 0, n-1, 0, k , temp,d,m);
}
int calculateMaximizedReturns(int n, int k, int d, int m, vector<int> returns) {
    int mx = 0 , temp = 0 ;
    for(int i = 0 ; i <= k ; i++)
    {
        calculate(n,i,d,m,returns,&temp) ;
        mx = max(temp , mx) ;
    }
    return mx ;
}

vector<string> split(const string& str, char delim) {
    vector<string> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        strings.push_back(str.substr(start, end - start));
    }
    return strings;
}

vector<int> splitStringToInt(const string& str, char delim) {
    vector<int> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        strings.push_back(stoi(str.substr(start, end - start)));
    }
    return strings;
}

void printVector(vector<int> vec) {
    for (vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << ' ';
    }
    cout << endl;
}

int main() {
    string firstLine;
    getline(cin, firstLine);

    vector<int> firstLineVec = splitStringToInt(firstLine, ' ');
    int n = firstLineVec[0];
    int k = firstLineVec[1];
    int d = firstLineVec[2];
    int m = firstLineVec[3];

    string returns;
    getline(cin, returns);

    vector<int> returnsVec = splitStringToInt(returns, ' ');

    int result = calculateMaximizedReturns(n, k, d, m, returnsVec);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}
