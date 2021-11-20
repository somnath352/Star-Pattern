//     1
//    12
//   123
//  1234
// 12345
//  1234
//   123
//    12
//     1
  


#include<bits/stdc++.h>
using namespace std;

int main() {
    
    
    int rows, cols, k = 0, num;
    cin >> rows;
    cols = (rows+1) / 2;
    
    for(int i = 1;i<=rows;i++) {
        (i<6) ? k++ : k--;
        
        num = 1; 
        for(int j = 1;j<=cols;j++) {
            if(j >= (rows-3) - k) {
                cout << num;
                num++;
                
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
