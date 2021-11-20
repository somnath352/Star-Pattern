// *   
// **  
// *** 
// ****
// ****
// *** 
// **  
// *   


#include<bits/stdc++.h>
using namespace std;

int main() {

    int rows, cols;
    cin >> rows;
	int k=0;
	int n = (rows+1) / 2;
	if(rows%2 == 0) cols = rows/2;
	else cols = (rows+1)/2;

	for(int i = 1;i<=rows;i++) {
        if(i<=n) k++;
        if(i>n+1) k--;
        // i<=4 ? k++ : k--;
        
	    for(int j = 1;j<=cols;j++) {
            if(j <= k) {
                cout << "*";
                
            }
            else {
                cout << " ";
                
            }
                
	    
        }
        cout << endl;
	}
}
