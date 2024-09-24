#include<iostream>

using namespace std;
int main(){
    int array[][4] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12}};

int n = 4, m = 4;
int sum = 0;

for(int j = 0; j<m; j++){
    sum += array[1][j];
}

cout<<sum<<endl;
    return 0;
}