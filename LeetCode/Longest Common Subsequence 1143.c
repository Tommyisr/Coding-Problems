int maxs(int a, int b){
    if(a>b) return a;
    else return b;
}

int longestCommonSubsequence(char * text1, char * text2){
int t1 = strlen(text1);
int t2 = strlen(text2);

int a[t1+1][t2+2];
int max = 0;
    
for(int i=0; i<t1+1;i++){
    for(int j=0; j<t2+1; j++){
        a[i][j]=0;    
        }
    }
    
for(int i=0; i<t1;i++){
    for(int j=0; j<t2; j++){
            if(text1[i]==text2[j]){
                a[i+1][j+1] = a[i][j]+1;
                if(a[i+1][j+1]>max) max = a[i+1][j+1];
            }
            else {
            
                a[i+1][j+1]=maxs(a[i][j+1], a[i+1][j]);
                if(a[i+1][j+1]>max) max = a[i+1][j+1];

            }
        }
    }
    
   
    
    
    
    
    return max;
}
