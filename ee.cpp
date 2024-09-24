// C++ Code to find element in row-wise and column-wise sorted matrix 
#include<bits/stdc++.h>
using namespace std;
// Function to find position of number X    
void FindPosition(int mat[4][4], int X){
    int n = 4, m = 4;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // If X is found, print its position
            if(mat[i][j]==X){
                cout << "Found At " << i+1 << "," << j+1;
                return;
            }
        }
    }
    // if X is not found
    cout << "Not Found" << endl;
}
int main(){
    // given matrix
    int matrix[4][4] =  { {1,  2, 3,  4},
                           {5,  6, 7,  8},
                           {9,10,11,12},
                           {13,14,15,16} };
    // number to be found
    int X = 7;
    // Calling the function to find the position of Element X.  
    FindPosition(matrix, X);
}
