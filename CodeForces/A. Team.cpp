// https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;


int main() {
    int nn,a,b,c;
    cin >> nn;
    int count = 0;
    
    while(nn--){
        
        cin >> a >> b >> c;
        
        if(a + b + c >= 2) count++;
        
    }
  
    cout << count;
    
    return 0;
}
