#include <iostream>
#include<cstring>
using namespace std;
void replacepihelper(char input[] , int start){
    int i ;
    if(input[start] == '\0' || input[start+1] == '\0'){
        return ;
    }
    replacepihelper(input,start+1);
    
    if(input[start] == 'p' && input[start+1] == 'i'){
        
        for(i=strlen(input) ; i>=start+2;i--){
            input[i+2] = input[i] ;
        }
        input[start] = '3' ;
        input[start+1] = '.' ;
        input[start+2] = '1' ;
        input[start+3] = '4' ;
        
    }
}
void replacePi(char input[]) {
	replacepihelper( input ,0) ;

}


int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
