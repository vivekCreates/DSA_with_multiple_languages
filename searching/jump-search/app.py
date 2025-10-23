import math

arr = [1,7,5,6,4,2,9,10,3,8]




def selectionSort(arr):
    for i in range(0,len(arr)):
        minIdx = i
        for j in range(i,len(arr)):
            if arr[j] < arr[minIdx]:
                minIdx = j
        arr[i],arr[minIdx] = arr[minIdx],arr[i]



def jumpSearch(arr,target):
    n = len(arr)
    prev=0
    steps = math.floor(math.sqrt(n))
    
    while arr[min(steps,n)-1] < target:
        prev=steps
        if prev >= n: return -1
        steps+= math.floor(math.sqrt(n))
    
    
    for i in range(prev,min(steps,n)):
        if arr[i] == target:
           return i
       
    return -1


selectionSort(arr)
print(arr)
# ans = jumpSearch(arr,7)
# print("Element not found" if ans < 0 else f"Element found at index: {ans}")
