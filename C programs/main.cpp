#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        // Print leading spaces
        for(int j = 0; j < n - i - 1; j++)
            cout << " ";

        // Print increasing numbers
        for(int j = 1; j <= i + 1; j++)
            cout << j;

        // Print decreasing numbers
        for(int j = i; j > 0; j--)
            cout << j;

        cout << endl;
    }

    return 0;
}
