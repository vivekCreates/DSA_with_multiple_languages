nums = [34, 56, 76, 44, 21, 88]
target = 76

def bubbleSort(arr):
    for i in range(0,len(arr)):
        for j in range(0,len(arr)-1-i):
            if arr[j+1]<arr[j]:
                arr[j+1],arr[j] = arr[j],arr[j+1]
                
                
def linearSearch(arr,target):
    for i in range(0,len(arr)):
        if arr[i] == target:
            return i
    return -1

bubbleSort(nums)
ans = linearSearch(nums,target)

print("Element not found") if ans < 0 else print("Element found at index :",ans)