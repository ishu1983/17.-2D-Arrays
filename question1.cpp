#include<iostream>

using namespace std;



int main(){
    int arr[][3] = {{4,7,8},{8,8,7}};
    int n=2, m=3;
    int countOf7 = 0;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==7){
                countOf7++;
        }
    }
}
    cout<<"count of 7 is: "<<countOf7<<endl;
    return 0;
}