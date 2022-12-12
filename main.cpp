#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, i, rng;
    string nama[100];

    cout << "Berapa banyak nama? ";
    cin >> n;

    for (i=1; i <= n;i++)
    {
        cout << "Nama index ke " << i << ": ";
        cin >> nama[i];
    }
    rng = rand() % n;

    cout << "Pemenang undian adalah: " << rng << " dengan nama " << nama[rng];

    return 0;
}
