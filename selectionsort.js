function swap(arr, i, j) {
    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

function selsort(arr) {
    let n = arr.length;
    for (let i = 0; i < n - 1; i++) {
        let k = i;
        for (let j = i + 1; j < n; j++)
            if (arr[j] < arr[k])
                k = j;
        swap(arr, k, i);
    }
}

function array(arr) {
    console.log(arr.join(" "));
}

let arr = [10, 5, 6, 2, 3, 7];
selsort(arr);
console.log("Sorted array:");
array(arr);