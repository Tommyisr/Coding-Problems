// https://www.codechef.com/NOV21C/problems/MAXBRIDGE

#include <iostream>
using namespace std;
#include <vector>


int main() {
	int tt, V,E;
	
	cin >> tt;
	while(tt--){
	    
	    vector<int> vert;
	    cin >> V >> E;
	  
	    
	    vector<vector<int>> matrix(V+1,vector<int>(V+1,0));
	   for(int i = 1;  E && i < V; i++, E--){
	        
             cout << i << " " << i+1 << endl;

	        matrix[i][i+1] = 1;
	        matrix[i+1][i] = 1;
	    }
	    
	    for(int i = 1;E && i <= V; i++){
	        
	        for(int k = 1;E && k <= i; k++){
	            for(int l = k+2; E && l <= i; l++){
	                if(matrix[k][l] == 0){
	                    cout << k << " " << l << endl;
	                    E--;
	                    matrix[k][l] = 1;
	                    matrix[l][k] = 1;
	                }
	                
	            }
	            
	        }
	    }
	    
	    
	    
	    
	}
	return 0;
}
