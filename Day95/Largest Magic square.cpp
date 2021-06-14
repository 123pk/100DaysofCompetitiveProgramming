/*
Platform :- Leetcode
Problem :- Largest Magic Square
Approach :- Find prefix sum column wise and row wise. Now we will try to find all squre of size 'k' from 2 to 50 , as matrix length is atmost 50,\
            If we find magic square we will store the max length out of all possible magic square .
*/

class Solution {
public:
   //calculating row prefix sum    
    vector<vector<long long>> rowpref( vector<vector<int>>&A){
        
        int n=A.size();
        int m=A[0].size();
        vector<vector<long long>>ans( n, vector<long long>( m, 0));
        
        for(int i=0;i<n;++i){
            long long tot=0;
            for(int j=0 ; j<m ;++j ) {
                tot += A[i][j];
                ans[i][j] = tot;
            }
        }
        
        return ans;
    }
    
    //calculating column prefix sum 
    vector<vector<long long>> colpref( vector<vector<int>>& A){
        
        int n = A.size();
        int m = A[0].size();
        
        vector<vector<long long>>ans( n, vector< long long> (m ,0));
        
        for(int j=0;j<m; ++j){
            long long tot = 0;
            for( int i =0; i<n ;++i){
                tot += A[i][j];
                ans[i][j] = tot;
            }
        }
        
        return ans;
    }
    
    int largestMagicSquare(vector<vector<int>>& grid) {
        
        vector<vector<long long>>row = rowpref(grid);
        vector<vector<long long >> col = colpref(grid);
        
        //I will find all squares of size of x from left to right
        int ans=1;
        int n=grid.size();
        int m=grid[0].size();
        
        for(int k=2;k<=50;++k){
            
            for(int i=k-1,j=k-1;i<n && j<m;++i,++j){
                
                 // nwo we will move in right direction
                for(int x=j; x<m;++x){
                    
                    int f=0,g=0;
                    long long start=0;
                    //we will check if all column have same sum or not
                    for(int l=x;l>=((x+1)-k);--l)
                    {
                        if(i==(k-1)){
                            if(g){
                                long long temp = col[i][l];
                                if(temp!=start){
                                    f=1;break;
                                }
                            }
                            else{
                                start= col[i][l];
                            }
                        }
                        else{
                            
                            if(g){
                                long long temp=col[i][l]-col[i-k][l];
                                if(temp!=start){
                                    f=1;break;
                                }
                            }
                            else{
                               start = col[i][l] - col[i-k][l];   
                            }
                        }
                    }
                    
                    if(f)continue;
                    
                    // now we will check start with row sum of length k
                    for(int l=i;l>=(i+1)-k;--l){
                        if(x==(k-1)){
                            long long temp=row[l][x];
                            if(temp!=start){
                                f=1;break;
                            }
                        }
                        else{
                            long long temp = row[l][x]-row[l][x-k];
                            if(temp!=start){
                                f=1;break;
                            }
                        }
                    }
                    
                    if(f)continue;
                    
                    // we will check diagonally 
                    long long temp=0;
                    for(int l=i,o=x;l>=(i+1)-k && o>=(x+1)-k ; --l,--o){
                        temp+=grid[l][o];
                    }
                    
                    if(temp!=start)continue;
                    
                    //now right diagonal
                    temp=0;
                    for(int l=i,o=(x+1)-k;l>=(i+1)-k && o<=x;++o,--l){
                        temp+=grid[l][o];
                    }
                    
                    if(temp==start)ans=max(ans,k);
                    
                }
            }
        }
        
        
        // now we will go downward
        for(int k=2;k<=50;++k){
            
            for(int i=k-1,j=k-1;i<n && j<m;++i,++j){
                
                //moving downward
                for(int x=i+1;x<n;++x){
                    
                    //long long temp=0;
                    int f=0;
                    long long start=0;
                    int g=0;
                    // column sum
                    for(int l=j;l>=(j+1)-k;--l){
                        if(g){
                            long long temp=col[x][l]-col[x-k][l];
                            if(temp!=start){
                                f=1;
                                break;
                            }
                        }
                        else{
                            start=col[x][l]-col[x-k][l];
                            g=1;
                        }
                    }
                    
                    if(f)continue;
                    
                    //row sum
                    for(int l=x;l>=(x+1)-k;--l){
                        
                        if(j==(k-1)){
                            long long temp = row[l][j];
                            if(temp!=start){
                                f=1;break;
                            }
                        }
                        else{
                            long long temp=row[l][j]-row[l][j-k];
                            if(temp!=start){
                                f=1;break;
                            }
                        }
                    }
                    
                    if(f)continue;
                    
                    //checking diagonally
                    long long temp=0;
                    for(int l=x,o=j;l>=(x+1)-k && o>=(j+1)-k ; --l,--o){
                        temp+=grid[l][o];
                    }
                    
                    if(temp!=start)continue;
                    
                    //now right diagonal
                    temp=0;
                    for(int l=x,o=(j+1)-k;l>=(x+1)-k && o<=j;++o,--l){
                        temp+=grid[l][o];
                    }
                    
                    if(temp==start)ans=max(ans,k);
                }
            }
        }
        return ans;
       
    }
};
