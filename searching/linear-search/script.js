const nums = [34, 56, 76, 44, 21, 88];

const target = 76;

function bubbleSort(arr) {
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length - i; j++) {
        if(arr[j+1]<arr[j]){
            let temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
  }
}

function linearSearch(arr,target){
    for (let i = 0; i < arr.length; i++) {
        if(arr[i]==target){
            return i;
        }
    }
    return -1
}


bubbleSort(nums);
const ans = linearSearch(nums,target)

ans < 0 ? console.log("Element not found")
      : console.log("Element found at index: ",ans);
      

