//BFS approach
class Solution {
public:
         int orangesRotting(vector<vector<int>>& grid) {
        int n =grid.size();
        int m= grid[0].size();
        int dx[4]={0,1,0,-1};
        int dy[4]={-1,0,1,0};
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==2)     q.push({i,j});
                if(grid[i][j]==1) fresh++;      
            }
        }
        int days=0;
        while(!q.empty() and fresh){
            days++;
            int levelNodes=q.size();
            while(levelNodes--){
                pair<int,int> f=q.front();
                q.pop();
                int x=f.first,y=f.second;
                for(int i=0;i<4;i++){
               int     X=x+dx[i],Y=y+dy[i];
                    if((X>=0 and X<n) and (Y>=0 and Y<m) and grid[X][Y]==1){
                        fresh--;
                        grid[X][Y]=2;
                        q.push({X,Y});
                    }
              }
            }
            
        }
        return (fresh==0)?days:-1;
        
    }
};
