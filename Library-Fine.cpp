#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'libraryFine' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d1
 *  2. INTEGER m1
 *  3. INTEGER y1
 *  4. INTEGER d2
 *  5. INTEGER m2
 *  6. INTEGER y2
 */

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (y1 > y2) return 10000;
    
    if (y1 == y2 && m1 > m2) return (m1-m2) * 500;
    
    if (y2 == y1 && m2 == m1 && d1 > d2) return (d1-d2) * 15;

    return 0;
}

int libraryFine1(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (y1 < y2) return 0;
    if (y1 > y2) return 10000;

    if (m1 < m2) return 0;
    if (m1 > m2) return (m1-m2) * 500;

    if (d1 > d2) return (d1-d2) * 15;
    
    return 0;
}
