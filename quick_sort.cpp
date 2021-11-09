#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class QuickSort
{
public:
    int n;
    int *arr;
    QuickSort(int n)
    {
        // int n = m;
        arr = new int[n];
    }
    // int arr[] = {};
    void getarray(int n)
    {
        cout << "Enter Arrary:- " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void display(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    void swap(int *arr, int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    int partition(int *arr, int l, int r)
    {
        int pivot = arr[r];
        int i = l - 1;
        for (int j = l; j < r; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, r);
        return i + 1;
    }

    void Sort(int *arr, int l, int r)
    {
        if (l < r)
        {
            int pi = partition(arr, l, r);
            Sort(arr, l, pi - 1);
            Sort(arr, pi + 1, r);
            // display(n);
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
    // cout << endl;
    QuickSort arr1(n);
    arr1.getarray(n);
    arr1.Sort(arr1.arr, 0, n - 1);
    arr1.display(n);
}