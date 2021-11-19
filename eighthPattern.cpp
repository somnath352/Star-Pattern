//    1   
//   121  
//  12321 
// 1234321


#include<bits/stdc++.h>
using namespace std;

int main() {

	int n = 4, m = 7, k;

	for(int i = 1;i<=n;i++) {
        k = 1;
	    for(int j = 1;j<=m;j++) {
            if(j >= ((n+1)-i) && j <= ((n-1)+i)) {
                cout << k;
                j<4 ? k++ : k--;
                
            }
            else {
                cout << " ";
     
            }
                
	    }
	    cout << endl;
	}
}
