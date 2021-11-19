//    *   
//   ***  
//  ***** 
// *******
//  ***** 
//   ***  
//    *   


#include<bits/stdc++.h>
using namespace std;

int main() {

	int n = 7, m = 7, k = 0;

	for(int i = 1;i<=n;i++) {
        i<=4 ? k++ : k--;
	    for(int j = 1;j<=m;j++) {
            if(j >= ((n-2)-k) && j <= ((n-4)+k)) {
                cout << "*";
                
            }
            else {
                cout << " ";
                
            }
                
	    }
	    cout << endl;
	}
}
