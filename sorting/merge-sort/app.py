def merge_Array(arr,l,m,r):
    i = l
    j = m+1
    result = []
    while i <= l and j <= r:
        if arr[i] < arr[j]:
            result.append(arr[i])
            i+=1
        else:
            result.append(arr[j])
            j+=1
    
    while i <= m : 
        result.append(arr[i])
        i+=1
            
    while j <= r : 
        result.append(arr[j])
        j+=1
            
    for k in range(0,len(result)):
        arr[k+l] = result[k]


def merge_sort(arr,l,r):
    if l == r: return
    m = (l+r)/2
    merge_sort(arr,l,m)
    merge_sort(arr,m+1,r)
    merge_Array(arr,l,m,r)
    

arr = [5,3,1,4,2]
merge_sort(arr,)