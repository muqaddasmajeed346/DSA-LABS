#include <iostream>
using namespace std;

int main()
{
    int n, search;
    
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> search;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            cout << "Number found at index " << i;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Number not found";
    }

    return 0;
}
