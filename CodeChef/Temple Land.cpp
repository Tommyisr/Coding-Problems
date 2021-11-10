// https://www.codechef.com/SDPCB21/problems/TEMPLELA

#include <iostream>
using namespace std;
#include <vector>

int main(void) {
int ss, N;
cin >> ss;

while(ss--){
    
    cin >> N;
    vector<int> path(N);
    int i = 0;
    while(N--) {
    
        cin >> path[i++];
    }
    bool valid = true;
    
    if(path[0] != 1 || path[path.size()-1] != 1 || path.size()%2==0) cout << "no" << endl;
    
    else{
        for(int i = 1; valid && i <= path.size()/2; i++){
            if(path[i]-path[i-1] != 1) {
                valid = false;
            }
        }
        
        for(int i = 1+path.size()/2; valid && i < path.size(); i++){
            if(path[i-1] - path[i] != 1) {
                valid = false;
            }
        }
        
        if(valid) cout << "yes" << endl;
        else cout << "no" << endl;
        
    }
    
    
}


return 0;
}

