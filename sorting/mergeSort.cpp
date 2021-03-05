#include <bits/stdc++.h>
using namespace std;
void mergeArr(vector<int> &arr, int l, int mid, int r)
{
    int l1 = mid + 1;
    int temp;
    vector<int> arrLeft;
    vector<int> arrRight;
    for (int i = l; i <= mid; i++)
    {
        arrLeft.push_back(arr[i]);
    }
    for (int i = l1; i < arr.size(); i++)
    {
        arrRight.push_back(arr[i]);
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < mid - l + 1 && j < r - l1 + 1)
    {
        if (arrLeft[i] > arrRight[j])
        {
            arr[k] = arrRight[j];
            k++;
            j++;
        }
        else
        {
            arr[k] = arrLeft[i];
            k++;
            i++;
        }
    }
    while (j < r - l1 + 1)
    {
        arr[k] = arrRight[j];
        k++;
        j++;
    }
    while (i < mid - l + 1)
    {
        arr[k] = arrLeft[i];
        k++;
        i++;
    }
}
void mergeSort(vector<int> &arr, int l, int r)
{
    int mid = (l + r) / 2;
    if (l < r)
    {
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        mergeArr(arr, l, mid, r);
    }
}
int main()
{
    vector<int> arr = {4, 3, 2, 1, 0, 9, 8, 7, 6, 5};
    mergeSort(arr, 0, arr.size() - 1);
    for (auto val : arr)
    {
        cout << val << " ";
    }
}