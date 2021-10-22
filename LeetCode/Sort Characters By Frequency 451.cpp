class Solution {
public:
    
    
//     int nextmax(vector<int>& low, vector<int>& up,vector<int>& dig, int max, int index){
        
//         for(int i = 0; i < low.size(); i++){
//             if(low[i] > max){
//             max = low[i];
//                 index = i;
//             }
//         }
//         for(int i = 0; i < up.size(); i++){
//             if(up[i] > max ) {
//             max = up[i];
//                 index = i;
            
//             }
//         }
        
//         for(int i = 0; i < dig.size(); i++){
//             if(dig[i] > max ) {
//             max = dig[i];
//                 index = i;
            
//             }
//         }
        
//         return index;
        
//     }
    
    string frequencySort(string s) {
        
        unordered_map<char,int> hash;
        priority_queue<pair<int,char>> heap;
        
        for(int i = 0; i<s.size(); i++) hash[s[i]]++;
        
        for(auto [a,b] : hash) heap.push({b,a});
        
        pair<int, char> p;
        int i = 0;
        
        while(!heap.empty()){
            p = heap.top();
            
            while(p.first != 0){
                s[i] = p.second;
                p.first--;
                i++;
            }
            heap.pop();
            
            
        }
//         vector<int> low(26,0);
//         vector<int> up(26,0);
//         vector<int> dig(26,0);
//         int count = s.size();
        
//         for(int i = 0; i < s.size(); i++){
            
//             if(s[i] >= 'a' && s[i] <= 'z')  low[s[i]-'a']++;
//             else if(s[i] >= 'A' && s[i] <= 'Z')  up[s[i]-'A']++;
//             else dig[s[i]-'0']++;
//         }
        
//         int index = nextmax(low, up,dig, 0,0);
//         int i = 0;
//         while(count > 0){
            
            
//             if(low[index] >= up[index] && low[index] >= dig[index]){
                
//                 while(low[index] != 0){
//                     s[i] = index + 'a';
//                     low[index]--;
//                     i++;
//                     count--;
//                 }
                
//             }
//             else if(up[index] >= low[index] && up[index] >= dig[index]){
//                 while(up[index] != 0){
//                     s[i] = index + 'A';
//                     up[index]--;
//                     i++;
//                     count--;
//                 }
//             }
//             else {
//                 while(dig[index] != 0){
//                     s[i] = index + '0';
//                     dig[index]--;
//                     i++;
//                     count--;
//                 }
                
                
//             }
            
//             int m = max(low[index],up[index]);
//             m = max(m, dig[index]);
//             index = nextmax(low, up, dig, m, index );
//         }
        
        return s;
        
    }
};
