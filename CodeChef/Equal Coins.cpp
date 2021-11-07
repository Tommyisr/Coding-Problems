// https://www.codechef.com/NOV21C/problems/EQUALCOIN

#include <iostream>
using namespace std;


int main(void) {
	
	int t = 0;
	int x,y,sum;
	scanf("%d",&t);
	while(t>0){
	    
	    scanf("%d %d",&x,&y);
	    
	   // sum = (x+2*y);
	    
	    if(x%2 ==1 || (x==0 && y%2 == 1)) cout << "NO" << endl;
	    else cout << "YES" << endl;
	    
	    t--;
	    
	}
	
	
	
	return 0;
}

