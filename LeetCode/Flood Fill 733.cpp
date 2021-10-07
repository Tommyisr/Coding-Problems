class Solution {
public:
    
    void rec(vector<vector<int>>& image, int i, int j, int oldcolor, int newcolor){
        
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size() || image[i][j] != oldcolor) return;
        
       
            image[i][j] = newcolor;
            rec(image, i-1,j,oldcolor,newcolor);
            rec(image, i+1,j,oldcolor,newcolor);
            rec(image, i,j-1,oldcolor,newcolor);
            rec(image, i,j+1,oldcolor,newcolor);
        
        
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        if(image[sr][sc] != newColor)
        rec(image,sr,sc,image[sr][sc],newColor);
        
        return image;
        
    }
};
