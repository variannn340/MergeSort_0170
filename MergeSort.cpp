#include <iostream>
using namespace std;

// create main array & temporary array
int arr[20], B[20];

// n is array input size
int n;

void input()
{
     while (true)
     {
        cout << "Masukkan Panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
        cout << "\nMaksimal panjang array adalah 20";
        }

   }
   cout << "\n_ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
   cout << "\nInputkan isi elemenet array" << endl;
   cout << "\n_ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

   for (int i = 0; i < n; i++)
   {
    cout << "Array index ke- " << i << " : ";
    cin >> arr[i];
   }
}

// create function MergeSort
void MergeSort(int low, int high)
{

    if (low >= high) // step 1
    {
        return;
    }

    int mid = (low + high) / 2; // step 2

