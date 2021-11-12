#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    int nn,kk;
    cin >> nn >> kk;
    int target = 0;
    int count = 0;
    
    vector<int> teams;
    
    while(nn--){
        int temp;
        cin >> temp;
        if(kk == 1) target = temp;
        
        teams.push_back(temp);
        kk--;
    }
  
    for(int i = 0; i < teams.size(); i++){
        if(teams[i] && teams[i] >= target) count++;
    }
    
    cout << count;
    
    return 0;
}
