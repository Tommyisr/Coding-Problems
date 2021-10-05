int max(int a, int b){
    return a>b ? a : b;
}
int min(int a, int b){
    return a<b ? a : b;
}

int calculateMinimumHP(int** dungeon, int dungeonSize, int* dungeonColSize){

    int i = 0;
    int j = 0;
    int** arr = (int**)malloc(sizeof(int*)*dungeonSize);
    for(i=0; i<dungeonSize;i++){
        arr[i] = (int*)malloc(sizeof(int)*(*dungeonColSize));
    }
     
    
    for(i = dungeonSize-1; i>=0; i--){
        for(j = (*dungeonColSize)-1; j>=0; j--){
            
            if(j+1<(*dungeonColSize) && i+1<dungeonSize){
                arr[i][j] = max(arr[i][j+1],arr[i+1][j])+dungeon[i][j];
            }
            else if(j+1<(*dungeonColSize)) {
                arr[i][j] = arr[i][j+1]+dungeon[i][j];
            }
            else if(i+1<dungeonSize) {
                arr[i][j] = arr[i+1][j]+dungeon[i][j];
            }
            else  {
                arr[i][j] = dungeon[i][j];
                
            }
            
            if(arr[i][j]>0) arr[i][j]=0;
        }
    }

    
    // for(i=0; i<dungeonSize; i++){
    //     for(j=0; j<*dungeonColSize;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    
    return arr[0][0]*(-1)+1;

}
