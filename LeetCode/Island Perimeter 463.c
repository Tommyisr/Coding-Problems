

int islandPerimeter(int** grid, int gridSize, int* gridColSize){

    int perimeter = 0;
    
    for(int i = 0; i<gridSize; i++){
        for(int j = 0; j<*gridColSize; j++){
            
            if(grid[i][j] == 1){
                if(i-1 < 0 || grid[i-1][j] == 0) perimeter++; // top

                if(j-1 < 0 || grid[i][j-1] == 0) perimeter++; //left

                if(i+1>=gridSize || grid[i+1][j] == 0) perimeter++;  //down

                if(j+1>=*gridColSize || grid[i][j+1] == 0) perimeter++; //right

            }
        }
    }
    
    return perimeter;
    
}
