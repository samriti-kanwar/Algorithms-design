#include <iostream>
using namespace std;

int main()
{
    int n, arr[10];
    cout << "Enter the numbers of elements:";
    cin >> n;
    cout << "Enter the Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n - 1)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    cout << "Sorted list:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}