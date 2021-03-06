#include <bits/stdc++.h>
#define print(arr)             \
    {                          \
        for (auto val : arr)   \
            cout               \
                << val << " "; \
    }
using namespace std;
int partition(vector<int> &arr, int l, int r)
{
    int pivot = arr[r];
    int i = l - 1, j = l;
    for (; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return ++i;
}
void quickSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
int main()
{
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    quickSort(arr, 0, arr.size() - 1);
    print(arr);
}