// https://www.codechef.com/NOV21C/problems/MAKEPAL

#include <iostream>
using namespace std;
#include <vector>

int main() {

    int t = 0;
    int num,x;
    int count = 0;
    
    scanf("%d",&t);
    while(t>0){
        scanf("%d",&num);
        while(num>0){
            scanf("%d",&x);
            if(x%2 == 1) count++;
            num--;
        }
        
        if(count>1) cout << count/2 << endl;
    
        else cout << "0" << endl;
        count = 0;
        t--;
    }


	return 0;
}
