const arr = [1,2,3,6,7,8,9,10,4,5]
const target=7;

function jumpSearch(arr,target){
    const n = arr.length
    let prev = 0

    let steps = Math.floor(Math.sqrt(n))

    while(arr[Math.min(steps,n)-1]<target){
        prev = steps
        if (prev>= n) return -1
        steps+= Math.floor(Math.sqrt(n))
    }

    for (let i = prev; i < arr[Math.min(n,steps)]; i++) {
       if(arr[i]==target) return i;
    }
    return -1;
}

function selectionSort(arr){
    for (let i = 0; i < arr.length; i++) {
        let minIdx = i;
        for (let j = i; j < arr.length; j++) {
            if(arr[j] < arr[minIdx]){
                minIdx = j
            }
        }
        let temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp
    }
}

selectionSort(arr)


const ans = jumpSearch(arr,target)

ans < 0 ? console.log("Element not found")
        :console.log("Element found at index:",ans);