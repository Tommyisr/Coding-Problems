// https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
using namespace std;
 
 
int main() {
    int nn;
    cin >> nn;
    while(nn--){
        string str;
        cin >> str;
        if(str.size() <= 10) cout << str << endl;
        else{
            cout << str[0] << to_string(str.size()-2) << str[str.size()-1] << endl;
        }
    }
    
    return 0;
}
