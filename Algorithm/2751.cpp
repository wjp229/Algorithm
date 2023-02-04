#include <iostream>
#include <algorithm>

using namespace std;
//
// void qSort(int* arr, int L, int R)
// {
//     int left = L;
//     int right = R;
//
//     int pivot = arr[(L+R)/2];
//
//     int temp;
//
//     do
//     {
//         while (arr[left] < pivot)
//             left++;
//         while (arr[right] > pivot)
//             right--;
//         if (left <= right)
//         {
//             temp = arr[left];
//             arr[left] = arr[right];
//             arr[right] = temp;
//             left++;
//             right--;
//         }
//     }
//     while (left <= right);
//
//     /* recursion */
//     if (L < right)
//         qSort(arr, L, right);
//
//     if (left < R)
//         qSort(arr, left, R);
// }

int compare(const void *a, const void *b)
{
    const int *x = (int *)a;
    const int *y = (int *)b;

    if(*x > *y)
    {
        return 1;
    }
    else if(*x < *y)
    {
        return -1;
    }

    return 0;
}

int sol2751()
{
    int num;
    cin >> num;

    int* arr = new int[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    qsort(arr, num, sizeof(int), compare);
    
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}
