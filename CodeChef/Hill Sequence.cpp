// https://www.codechef.com/NOV21C/problems/HILLSEQ

#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
#include<unordered_map>


int main(void) {

    int tt;
    int flag = 0;
    int index = -1;
    
    scanf("%d",&tt);
    int nsize;
    while(tt>0){
        scanf("%d",&nsize);
        
        vector<int> vec;
        unordered_map<int,int> hash;
        vector<int> stack;
        
        while(nsize>0){
            
            int x;
            scanf("%d",&x);
            
            if(!hash.count(x)) {
                hash[x] = 1;
                vec.push_back(x);    
            }
            
            else hash[x]++;
            
            if(hash[x] > 2) flag = 1;
            
            else if(hash[x] == 2) {
                stack.push_back(x);
            }
            
            nsize--;
        }
        
        sort(vec.begin(),vec.end(),greater<int>());
        sort(stack.begin(),stack.end(),greater<int>());
        
        if(flag || hash[vec[0]] == 2) {
            cout << "-1";
            
        }
        
        
        else {
            while(!stack.empty()){
                cout << stack.back() << " ";
                stack.pop_back();
            }
            
            for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << " ";
            }
            
        }
        
        
        cout << endl;
        flag = 0;
        index = -1;
        tt--;
    }



	return 0;
}

