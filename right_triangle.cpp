#include <iostream>
using namespace std;

int main() {
    //takigninut from user
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {//for rows
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
