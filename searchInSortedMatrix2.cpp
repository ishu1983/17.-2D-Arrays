#include<iostream>

using namespace std;
void search(int mat[][4], int x){
    int n = 4, m = 4;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(mat[i][j] == x){
                cout<<"found in ("<<i<<","<<j<<")";
                return;
            }
        }
    }
cout<<"-1"<<endl;
}
int main(){
    int matrix[4][4] =  { {1, 2, 3, 4},
                          {5, 6, 7, 8},
                          {9, 10, 11, 12},
                          {13, 14, 15, 16} };

    search(matrix, 16);
    return 0;
}