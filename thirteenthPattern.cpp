//    1   
//   232  
//  34543 
// 4567654



#include<bits/stdc++.h>
using namespace std;

int main() {
    
    
    int rows, cols, k;
    cin >> rows;
    cols = (2*rows) - 1;
    
    for(int i = 1;i<=rows;i++) {
        k = i;
        for(int j = 1;j<=cols;j++) {
            if(j >= (rows+1) - i && j <= (rows-1) + i) {
                cout << k;
                (j<rows) ? k++ : k--;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
