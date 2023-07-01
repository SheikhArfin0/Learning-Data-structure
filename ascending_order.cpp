#include <iostream>
using namespace std;

int main()
{
    int num[100], n;
    int i, j, fd,des;
    cout << "enter the numbers you want to sort: ";
    cin >> n;
   for (i = 0; i < n; i++)
    {
       des++;
     cout << "enter number [" << des << "] : ";
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (num[i] < num[j])
            {
                fd = num[i];
                num[i] = num[j];
                num[j] = fd;
            }
        }
    }
    
    cout << "Ascending Order :" << endl;
    for (i = 0; i<n; i++)
    {
        cout << " " << num[i] << endl;
    }
    return 0;
}
