/*
Platform :- Leetcode
Problem :- Range Sum Query 2D - Immutable
*/
class NumMatrix {
public:
    vector<vector<int>>row;
    //vector<vector<int>>col;
    NumMatrix(vector<vector<int>>& matrix) {
        
        for(int  i=0;i<matrix.size();++i){
            
            vector<int>temp;
            int tot=0;
            for(int j=0;j<matrix[i].size();++j){
                tot+=matrix[i][j];
                temp.push_back(tot);
            }
            row.push_back(temp);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans=0;
        for(int i=row1;i<=row2;++i){
            
            ans+=row[i][col2];
            if(col1==0){
              continue;
            }
            ans-=row[i][col1-1];
        }
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
