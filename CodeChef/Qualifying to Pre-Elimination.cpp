// https://www.codechef.com/SDPCB21/problems/QUALPREL

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


int main(void) {
int tt;
cin >> tt;

while(tt--){
    int n,k;
    cin >> n >> k;
    vector<int> arr;
    
    while(n--){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    
    int temp = arr[k-1];
    for(int i = k; i < arr.size(); i++){
        if(arr[i] == temp) k++;
    }
    
    cout << k << endl;

    
}

return 0;
}

