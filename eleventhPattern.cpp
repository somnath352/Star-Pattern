// *   
// **  
// *** 
// ****
// *** 
// **  
// *   


#include<bits/stdc++.h>
using namespace std;

int main() {

	int rows = 7, cols = 4, k=0;

	for(int i = 1;i<=rows;i++) {

        i<=4 ? k++ : k--;
        
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
