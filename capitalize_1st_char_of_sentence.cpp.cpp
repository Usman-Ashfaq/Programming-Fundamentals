#include <iostream>
#include <string>
using namespace std;
//main function
int main()
{
    string arr;
    cout << "Please enter a line:\n";       //taking input from user
    getline(cin, arr);
//check or flag
    bool found = true;
    for (int i = 0; i != arr.length(); i++)
    {
        if (found && (arr[i] >= 'a' && arr[i] <= 'z'))
        {
            arr[i] = static_cast<char>(static_cast<int>(arr[i]) - 32);
            found = false;
        }
        else if (arr[i] == '.' || arr[i] == '!' || arr[i] == '?')
        {
            found = true;
        }
    }
//printing
    cout << "Capital string:\n" << arr << endl;
    system("pause");
    return 0;
}
