#include <iostream>
#include <math.h>

using namespace std;

void swap(int *a , int *b){
    int* temp = a;
    a = b;
    b = temp;
}

int jumpSearch(int arr[], int n, int target){

    int steps = sqrt(n);
    int prev = 0;

    while (arr[min(steps, n) - 1] < target)
    {
        prev = steps;
        if (prev >= n)
            return -1;
        steps += sqrt(n);
    }

    for (int i = prev; i < min(steps, n); i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

void selectionSort(int arr[]){
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int minIdx = i;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}



int main()
{
    int arr[] = {1, 3, 2, 10, 5, 8, 7, 6, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    selectionSort(arr);
    int ans = jumpSearch(arr, n, target);

    ans < 0 ? cout << "Element not found " << endl : cout << "Element found at index: " << ans << endl;

    return 0;
}