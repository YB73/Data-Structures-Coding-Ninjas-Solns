#include<iostream>
using namespace std;
int lastIndex(int input[] , int size , int x){  
        if(size == 0){
            return -1 ;
        }
       
        int ans = lastIndex(input+1,size-1,x);
        if( ans == -1 ){  //If we do not find x anywhere in the array we check whether x is at 0th index or not.
           if(input[0] == x){
               return 0;
           }
           else{
               return -1 ;
           }
            
        }
        else{
            return ans+1 ;  
        }

}
int main(){
    int n ;
    cin>>n;
     int *input = new int[n] ;
     for(int i=0 ; i<n;i++){
         cin>>input[i] ;
     }
     int x;
     cin>>x ;
      cout<<lastIndex(input,n,x) ;
}