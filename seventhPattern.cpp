// *********
// **** ****
// ***   ***
// **     **
// *       *


#include<bits/stdc++.h>
using namespace std;

int main() {

	int n = 5, m = 9, k;
	for(int i = 1;i<=n;i++) {

	    for(int j = 1;j<=m;j++) {
            if(j <= ((n+1)-i) || j >= ((n-1)+i)) {
                cout << "*";
                
            }
            else {
                cout << " ";
     
            }
                
	    }
	    cout << endl;
	}
}
