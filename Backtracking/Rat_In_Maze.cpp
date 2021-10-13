#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
void printSol(int **solution, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< solution[i][j]<<" ";
        }
    }
    cout<<endl;
}
void helper(int maze[][19], int n, int **solution, int x, int y){
    if(x== n-1 && y== n-1){
        solution[x][y] = 1;
        printSol(solution,n);
        solution[x][y] = 0;
    }
    if(x>=n || x<0 || y>=n || y<0 || maze[x][y]==0 || solution[x][y]==1){
        return;
    }
    solution[x][y]=1;
    helper(maze,n,solution,x-1,y);
    helper(maze,n,solution,x+1,y);
    helper(maze,n,solution,x,y-1);
    helper(maze,n,solution,x,y+1);
    solution[x][y]=0;
}
void RatMaze(int maze[][19], int n){
    int **solution = new int*[n];
    for(int i=0;i<n;i++){
        solution[i]= new int[n];
    }
    helper(maze,n,solution,0,0);

}

int main(){
    int n;
    cout<<"Enter size of binary matrix : "<<endl;
    cin>>n;
    int maze[19][19];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
         }
         RatMaze(maze,n);
         return 0;
}