nums = [40,50,10,20,30]

def binary_search(arr,target):
    left = 0
    right= len(arr)-1
    while left<=right:
        mid = int((left+right)/2)
        if target > arr[mid]:
            left = mid+1
        elif target < arr[mid]:
            right = mid-1
        else:
            return mid
    return -1    


def insertion_sort(arr):
    for i in range(1,len(arr)):
        current = arr[i]
        j = i-1
        while(arr[j]>current and j>=0):
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = current


insertion_sort(nums)

target = int(input("Enter the target: "))
result = binary_search(nums,target)

print("Element not found") if result < 0 else print("Element found at index :",result)