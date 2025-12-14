#include <iostream>

using namespace std;

int main() 
{
    int n;

    cout << "Masukkan jumlah baris Segitiga Pascal: ";
    cin >> n;

    // Array untuk menyimpan nilai segitiga Pascal
    int pascal[50][50];

    // Mengisi segitiga Pascal
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) 
        {
            // Angka pertama dan terakhir setiap baris = 1
            if (j == 0 || j == i) 
            {
                pascal[i][j] = 1;
            }
            else 
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    // Menampilkan segitiga Pascal
    for (int i = 0; i < n; i++)
    {
        // Memberi spasi agar berbentuk segitiga
        for (int s = 0; s < n - i; s++)
        {
            cout << " ";
        }

        // Tampilkan angka
        for (int j = 0; j <= i; j++)
        {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
