#include <iostream>

using namespace std;

void output(string otvet)
{
    cout << otvet;
}

void solution(int k, int b)
{
    int y = 20 * k + b;
    string m[y][40];

    for (int y1 = 0; y1 < y; y1++)
    {
        for (int x = 0; x < 40; x++)
        {
            m[y1][x] = " ";
        }
    }

    for (int x = 0; x < 40; x++)
    {
        m[20][x] = "-";
    }

    for (int y2 = 0; y2 < y; y2++)
    {
        m[y2][20] = "|";
    }

    for (int x = -10; x < 10; x++)
    {
        int yn = x * k + b;
        m[20 -  yn][x + 20] = "/";
    }

    for (int y3 = 0; y3 < y; y3++)
    {
        for (int x = 0; x < 40; x++)
        {
            cout << m[y3][x];
        }
        cout << endl;
    }
}

void input()
{
    int k, b;
    cin >> k >> b;

    solution(k, b);
}

int main()
{
    input();
    return 0;
}

