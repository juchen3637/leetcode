//brute force method
//192 ms
//42.7 mb usuage

var twoSum = function(nums, target) {
    for (let i = 0; i < nums.length; i++) { //this for loop runs through the entire length of the array
        for (let j = i + 1; j < nums.length; j++) { //this for loop (j) always goes 1 element ahead of (i)
            if (nums[i] + nums[j] == target) { //this if statement takes the variables i and j then checks if the sum between them equals the target num
                return [i, j] // if the if statement is true then the variables i and j are returned to the function 
            }
        }
    }
};

//hashtable method
// 102 ms
// 43.8

var twoSum = function(nums, target) {
    const hashTable = new Map(); // initialize new hashtable with map function

    for (let i = 0; i <nums.length; i++) { //runs through entire length of the array
        let targetSum = target - nums[i]; //the target minus the current value equals the number we are looking for to equal the sum of the target

        if (hashTable.has(targetSum)) { // if the hashtable has the number we are looking for then it returns a value
            return [i, hashTable.get(targetSum)]; // the value returned is the current key and value the for loop is on, and the number we are looking for in the hashtable to equal the target sum
        }

        else {
            hashTable.set(nums[i], i); // if the value is not in the hashtable then the value the for loop is on will be stored into the hashtable
        }
    }
}