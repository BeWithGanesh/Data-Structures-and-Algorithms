#include<bits/stdc++.h>
using namespace std;

int matrix[100][100];

void solve(int x, int y , int r, int c){
	
    if((x+1<r)&& matrix[x+1][y]==1)
      matrix[x+1][y] = 2;
      
    if((x-1>= 0)&& matrix[x-1][y]==1)
      matrix[x-1][y] = 2;
    
    if((y+1 < c)&& matrix[x][y+1]==1)
      matrix[x][y+1] = 2;
    
    if((y-1 >= 0)&& matrix[x][y-1]==1)
      matrix[x][y-1] = 2;  
}

int main(){
    int t;
	cin>>t;
    while(t--){
        
        int r,c;  
		cin>>r>>c;
        
        memset(matrix,0,sizeof(matrix));
        queue<pair<int,int> >q;
        
        for(int i=0; i<r;i++)
          for(int j=0; j<c; j++)
             cin>>matrix[i][j];
        
        int count= -1, oldsize=0, newsize;
        
        while(1){
          for(int i=0; i<r;i++)
            for(int j=0; j<c; j++)    
               if(matrix[i][j]==2)
                  q.push({i,j});
            
            newsize = q.size();
            
            if(oldsize == newsize) break; 
             else oldsize = newsize;
            
            while(q.size()){
              solve(q.front().first, q.front().second, r, c);
              q.pop();
            }
            
            count++;
        }
        
        for(int i=0; i<r;i++)
            for(int j=0; j<c; j++)    
               if(matrix[i][j]==1)
                   count = -1; 
        
        int ans = (count == -1) ? -1 : count;
        cout<<"Max time incurred: "<<ans<<endl;
    }
  return 0;
}


/*
Output:

1
3
5
2 1 0 2 1
1 0 1 2 1
1 0 0 2 1
Max time incurred: 2

*/
