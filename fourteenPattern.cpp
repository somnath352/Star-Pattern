//  6 5 4 3 2 1 0
//  5 4 3 2 1 0 
//  4 3 2 1 0  
//  3 2 1 0   
//  2 1 0    
//  1 0     
//  0   


#include<bits/stdc++.h>
using namespace std;

int main() {
    
    
    int rows, cols, k;
    cin >> rows;
    cols = rows;
    
    for(int i = 1;i<=rows;i++) {
        k = rows - i;
        for(int j = 1;j<=cols;j++) {
            if(j <= (rows+1) - i) {
                cout << " " << k;
                k--;
                
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
