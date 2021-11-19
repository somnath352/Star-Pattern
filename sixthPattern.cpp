//     *    
//    * *   
//   * * *  
//  * * * * 
// * * * * *


#include<bits/stdc++.h>
using namespace std;

int main() {

	int n = 5, m = 9, k;
	for(int i = 1;i<=n;i++) {
	   k = 1;
	    for(int j = 1;j<=m;j++) {
            if(j >= ((n+1)-i) && j <= ((n-1)+i) && k) {
                cout << "*";
                k = 0;
            }
            else {
                cout << " ";
                k = 1; 
            }
                
	    }
	    cout << endl;
	}
}
