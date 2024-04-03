// problem --- Given a sorted array of 'n' elements and a target element 't',in the array. Return -1 if the target element is not found.

// binary search works on only sorted arrays

/*    wroking procudure of binary search

1.  Find the middle element of the array.
2.  Compare the middle element with the target element.
3.  If the target element matches the middle element, return the index.
4.  If the target element is less than the middle element, repeat the search on the left sub-array.
5.  If the target element is greater than the middle element, repeat the search on the right sub-array.
6.  If the array is empty, return -1.
7.  If the target element is not found, return -1.
*/

function binarySearch(arr, t) {
  let leftIndex = 0;
  let rightIndex = arr.length - 1;

  while (leftIndex <= rightIndex) {
    const midIndex = Math.floor((leftIndex + rightIndex) / 2);
    if (arr[midIndex] === t) {
      return midIndex;
    } else if (arr[midIndex] < t) {
      leftIndex = midIndex + 1;
    } else {
      rightIndex = midIndex - 1;
    }
  }
  return -1;
}

// wrost time complexicity is O(log n) and best time complexicity is O(1)

// console.log(binarySearch([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 4));

/* working procudure of recursive binary search

    if the array is empty, return -1.

    if the array has elements, find the midddle element in the array. if target is equal to the middle element, reutn the index of the middle element.

    if the target is less than the middle element, repeat the search on the left sub-array.

    if the target is greater than the middle element, repeat the search on the right sub-array.


*/

function recursiveBinarySearch(arr, target) {
  return search(arr, target, 0, arr.length - 1);
}

function search(arr, target, leftIndex, rightIndex) {
  if (leftIndex > rightIndex) {
    return -1;
  }
  const midIndex = Math.floor((leftIndex + rightIndex) / 2);
  if (arr[midIndex] === target) {
    return midIndex;
  }
  if (target < arr[midIndex]) {
    return search(arr, target, leftIndex, midIndex - 1);
  } else {
    return search(arr, target, midIndex + 1, rightIndex);
  }
}

console.log(recursiveBinarySearch([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 4));
