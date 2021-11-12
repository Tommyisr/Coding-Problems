// https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <string>
using namespace std;
 
 
int main() {
    int n,m,a;
    cin >> n >> m >> a;
    
 
    long long length = 1;
    if(n % a == 0) length = n/a;
    else length = n/a + 1;
    
    long long width = 1;
     if(m % a == 0) width = m/a;
    else width = m/a + 1;
    
    cout << to_string(width*length);
  
    
    return 0;
}

