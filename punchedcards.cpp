

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t, q = 0;
    cin >> t;
    while (q++ < t) {
        int n, m, i, j;
        cin >> n >> m;
        // compute the actual number of rows in the output
        n = (n - 1) * 2 + 3;
        m = (m - 1) * 2 + 3;

        cout << "Case #" << q << ":" << endl;
        for (i=0;i<n;i++) {
            for (j=0;j<m;j++) {
                // handle top left corner
                if (i < 2 && j < 2) {
                    cout << ".";
                    continue;
                }
                // handle intersection coordinates
                if (i % 2 == 0 && j % 2 == 0)  {
                    cout << "+";
                    continue;
                }
                // handle pipes
                if (i % 2 == 0 && j % 2 == 1)  cout << "-";
                if (i % 2 == 1 && j % 2 == 0)  cout << "|";
              
                // everything else
                if ((i + j) % 2 == 0) cout << ".";
            }
            cout << endl;
        }
    }
    return 0;
}