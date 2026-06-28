#include <bits/stdc++.h>

using namespace std;

void Try(int n, char A, char B, char C)
{
    if(n == 1)
        cout << A << " -> " << C << "\n"; //Neu n = 1 doi A -> C
    else
    {
        Try(n - 1, A, C, B); // chuyen n - 1 dia A -> B
        cout << A << " -> " << C << "\n"; // chuyen dia n tu A -> C
        Try(n - 1, B, A, C);
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    Try(n, 'A', 'B', 'C');

    return 0;
}
