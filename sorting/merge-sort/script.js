function mergeArray(arr, l, m, r) {
    let i = l;
    let j = m + 1;
    let result = [];
    
    while (i <= m && j <= r) {   
        if (arr[i] < arr[j]) {
            result.push(arr[i]);
            i++;
        } else {
            result.push(arr[j]);
            j++;
        }
    }
    
    while (i <= m) {
        result.push(arr[i]);
        i++;
    }
    while (j <= r) {
        result.push(arr[j]);
        j++;
    }
    for (let k = 0; k < result.length; k++) {
        arr[k+l] = result[k];
    }
    
    console.log("After merge:", result);
}




function mergeSort(arr,l,r){
    if (l==r) return;
    let m = Math.floor((l+r)/2)
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    mergeArray(arr,l,m,r)
}


mergeSort([1,5,2,3,4],0,4)