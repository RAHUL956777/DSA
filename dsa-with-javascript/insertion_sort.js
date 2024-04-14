//insertion sort-->
/*
virtually split the array into a sorted and unsorted part
Assume that the first element is already sorted and remaining elements are unsorted
select an unsorted element and compare with all elements in the sorted part
if the elements is the sorted part is smaller than the selected element, proceed to the next element in the unsorted part. else, shift large elements in the sorted part towards the right.
insert the selected element at the right index
repeat till all the unsorted elements are placed in the right order

    */

function inserTionSort(arr) {
  for (let i = 1; i < arr.length; i++) {
    let numberToInsert = arr[i];
    let j = i - 1;
    while (j >= 0 && arr[j] > numberToInsert) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = numberToInsert;
  }
}

const arr = [8, 20, -2, 4, -6];
inserTionSort(arr)
console.log(arr);
