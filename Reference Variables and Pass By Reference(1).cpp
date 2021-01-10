#include <iostream>
using namespace std;

void func(int i, int& j, int p){
    i++; //local variable i
    j++; //pointer variable
    p++; //reference var 
}

int main(){
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
}
