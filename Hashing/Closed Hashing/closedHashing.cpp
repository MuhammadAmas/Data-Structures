#include <iostream>
using namespace std;

int main()
{
    int *arr = new int(10);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = -1;
    }

    int num;

    cout << "Enter an integer: ";
    cin >> num;
    int key = (num % 10) - 1;

    while (num != -1)
    {
        int count = 0;

        int flag = 0;
        while (flag == 0)
        {
            if (arr[key + count] == -1)
            {
                arr[key + count] = num;
                cout << count;
                flag = -1;
            }
            else
            {
                count += 1;
                cout << count << "hey";
            }
        }
        cout << "Enter an integer: ";
        cin >> num;
        key = (num % 10) - 1;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}