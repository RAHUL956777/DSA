//problem give an array of integers, sort the array using bubble sort algorithm it is a poor sorting algorithm it is use to understand the concept of sorting

function bubbleSort(arr) {
  let swapped;
  do {
    swapped = false;
    for (let i = 0; i < arr.length - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        let temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        swapped = true;8
      }
    }
  } while (swapped);
}
