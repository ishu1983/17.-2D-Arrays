#include<iostream>

using namespace std;
int main(){
    int n = 3, m = 3;
    int matrix[][m] = {{2, 3, 4},
                       {5, 6, 7},
                       {8, 9, 10}};

    int transpose[m][n] ={{0}};

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<transpose[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}