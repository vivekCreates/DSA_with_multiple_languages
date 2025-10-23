const nums = [60,40,30,20,50]
const target = 40

function binarySearch(arr,target){
    let left = 0;
    let right = arr.length-1;

    while (left<=right) {
        let mid = (left+right)-1

        if(target>arr[mid]){
            left = mid+1
        }else if(target<arr[mid]){
            right = mid-1
        }else{
            return mid
        }
    }
    return -1
}

// [3,2,1,5,4]

function insertionSort(arr){
    for (let i = 1; i < arr.length; i++) {
        let current = arr[i]
        let j = i - 1;
            while (arr[j] > current && j>=0) {
               arr[j+1] = arr[j]
               j--
            }
            arr[j+1] = current
    }
}

insertionSort(nums)
console.log(nums)

const ans = binarySearch(nums)

ans < 0 ? console.log("Element not found")
        :console.log("Element found at index: ",ans);
