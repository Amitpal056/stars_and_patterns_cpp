// you have to give input of the odd numbers only --- 
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the height of pattern : ";
    cin >> num;
    int mid = num / 2;
    for (int i = 0; i < num; i++)
    {
        if (i < mid)
        {
            for (int j = 0; j < mid - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < i + 1; j++)
            {
                if (j == 0)
                {
                    cout << '*';
                }
                else
                {
                    cout << " ";
                }
            }
            for (int j = 0; j < i; j++)
            {
                if (j == i - 1)
                {
                    cout << '*';
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else if (i == mid)
        {
            for (int j = 0; j < num; j++)
            {
                if (j == 0 || j == num - 1)
                {
                    cout << '*';
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else
        {
            int n = mid;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j <= i; j++)
                {
                    cout << " ";
                }
                for (int j = n - i; j > 0; j--)
                {
                    if (j == n - i)
                    {
                        cout << '*';
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                for (int j = n - i - 1; j > 0; j--)
                {
                    if (j == 1)
                    {
                        cout << '*';
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            break;
        }
    }
    return 0;
}
