const readline = require('readline');
const rl = readline.createInterface({
input: process.stdin,
output: process.stdout
});

function swap(arr, i, j) {
    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

function bubblesort(arr) {
    let size = arr.length;
    let x = 0;
    do {
        let y = 0;
        do {
            if (arr[y] > arr[y + 1]) {
                swap(arr, y, y + 1);
            }
            y++;
        } while (y < size - x - 1);
        x++;
    } while (x < size - 1);
}

rl.question("Enter the Number of Elements array: ", (n) => {
rl.question("Enter the Elements: ", (elements) => {
    let arr = elements.split(' ').map(Number);
    bubblesort(arr);
    console.log("Array after bubble sort: ");
    for (let x = 0; x < arr.length; x++) {
        console.log(arr[x]);
    }
    rl.close();
});
});