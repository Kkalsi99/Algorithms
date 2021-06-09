#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int> &arr, int div)
{
    vector<int> out(arr.size(), 0);
    int n = arr.size();
    int count[10] = {0};
    for (int i = 0; i < arr.size(); i++)
        count[(arr[i] / div) % 10]++;
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        out[count[(arr[i] / div) % 10] - 1] = arr[i];
        count[(arr[i] / div) % 10]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = out[i];
}
void radixSort(vector<int> &arr)
{
    for (int i = 1; i < 1000; i *= 10)
    {
        countSort(arr, i);
    }
}