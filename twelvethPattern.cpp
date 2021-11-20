// ***********
//  ********* 
//   *******  
//    *****   
//     ***    
//      *     


#include<bits/stdc++.h>
using namespace std;

int main() {
    
    
    int rows, cols;
    cin >> rows;
    cols = (2*rows) - 1;

    for(int i = 1;i<=rows;i++) {
        for(int j = 1;j<=cols;j++) {
            if(j >= i && j <= (2*rows) - i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
