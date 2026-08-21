#include <iostream>
using namespace std;

int main(){
    int rows = 5;
    int i = 1;
    do{
        cout << string(rows - i, ' ') + string(i, '*') << endl;
        i++;
    }while(i <= rows);
}