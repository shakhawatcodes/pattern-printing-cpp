#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {

        // spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // stars
        for(int j = 1; j <= (2*i - 1); j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}//koisi na????complex pattern e i,j nia brainstormig  korba.easy gula emnei paro,and complex gula niye kisu na kisu pattern banate hobe.