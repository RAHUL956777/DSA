// problem-  Give an array of 'n' elements, and a target element 't',find the index of 't' in the array. Return -1 if the terget element is not found

//arr[] = {1,2,3,4,5,6,7,8,9,10} t=3 will return 2

//start at the first element in the array and move towards the last.
//At each element though, check if the element is equal to the target element.
//If it is, return the index of the element.
//if element not found return -1

function linearSearch(arr, t) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === t) {
      return i;
    }
  }
  return -1;
}

// O(n) time complexity
console.log(linearSearch([5, 10, 20, 30, 25, 35], 25));
