#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class InsertionSort
{
public:
    int n;
    int *arr;
    InsertionSort(int n)
    {
        arr = new int[n];
    }
    void getArray(int n)
    {
        cout << "Enter Elements:- " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void Display(int *arr, int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void Sort(int *arr, int n)
    {
        for (int i = 1; i < n; i++)
        {
            int x = arr[i];
            int j = i - 1;
            while (arr[j] > x && j >= 0)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            cout << "After loop " << i << endl;
            arr[j + 1] = x;
            Display(arr, n);
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cout << "Enter No of Elements:- " << endl;
    cin >> n;
    InsertionSort arr1(n);
    arr1.getArray(n);
    arr1.Sort(arr1.arr, n);
    // arr1.Display(arr1.arr, n);

    return 0;
}