#include <iostream>
using namespace std;

int partition(int arr[], int l, int r)
{
    int piviot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (arr[j] < piviot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[6] = {4, 2, 5, 7, 9, 3};

    int n = sizeof(arr) / sizeof(int);

    cout << "Unsorted Array : ";
    print(arr, n);

    quickSort(arr, 0, 5);

    cout << "Sorted Array : ";
    print(arr, n);

    return 0;
};
