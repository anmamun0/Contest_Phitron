#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    // int mat[N + 5][N + 5];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if(i==j)
                cout << "*";
            else if(i+j == N+1)
                cout << "*";
            else if(j+i> i and j+i <=N and i<=j)
                cout << '7';
            else if(j>=i)
                cout << "7";
            else
                cout << "0";
        }

        cout << endl;
    }

        return 0;
}
