#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the element size: " << endl;
    cin >> a;

    int arr[a];
    cout << "Input the array: " << endl;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements are: " << endl;
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int highest = arr[0];
    int lowest = arr[0];

    for (int i = 1; i < a; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
        else if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }

    cout << "Highest Value: " << highest << endl;
    cout << "Lowest value : " << lowest << endl;
    cout << "reverse order: " << endl;
    for (int i = a - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

