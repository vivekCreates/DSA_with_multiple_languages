#include <iostream>

using namespace std;

int binarySearch(int *arr, int n, int target)
{

    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (target > arr[mid])
        {
            left = mid + 1;
        }
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

void insertionSort(int arr[],int n){

    for (int i = 0; i < n; i++){
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main()
{

    int arr[] = {10, 40, 30, 20, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 40;

    insertionSort(arr,n);
    int result = binarySearch(arr, n, target);

    result < 0 ? cout << "Element not found " << endl : cout << "Element found at index: " << result << endl;

    return 0;
}