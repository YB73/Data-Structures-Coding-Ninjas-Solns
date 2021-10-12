#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<set>
#include<unordered_set>
#include<vector>
using namespace std;
int board[11][11];
bool isPossible(int n, int row, int col){
  //same column check
  for(int i=row-1;i>=0;i--){
      if(board[i][col]==1){
          return false;
      }
  }
  //Upper Left Diagonal
  for(int i=row-1, j=col-1;i>=0,j>=0;i--,j--){
      if(board[i][j]==1){
          return false;
      }
  }
   for(int i=row-1, j=col+1;i>=0,j<=n;i--,j++){
       if(board[i][j]==1){
           return false;
       }
   }
   return true;
}
void NQhelper(int n, int row){
if(row==n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< board[i][j] <<" ";
        }
    }
    cout<<endl;
    return;
}

//place at all possible places and move to smaller problem 
for(int j=0;j<n;j++){
    if(isPossible(n,row,j)){
        board[row][j]=1;
        NQhelper(n,row+1);
        board[row][j]=0;
    }
}
return;
}
void NQueenSolve(int n){
    memset(board, 0, 11*11*sizeof(int));
    NQhelper(n,0);
}
int main(){
    int n;
    cout<<"Enter the board size n :"<<endl;
    cin>>n;
    NQueenSolve(n);
    return 0;
}