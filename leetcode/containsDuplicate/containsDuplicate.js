//Set method
//148 ms
//51 mb

var containsDuplicate = function(nums) {
    const set = new Set([...nums]); // The function "Set" takes an array and only uses unique elements, so duplicate elements are deleted. Just like sets in discrete math.
    if (set.size != nums.length) { // In this if function we are comparing the set size to the length of the nums array
        return true; // If the set size is not equal/less than the nums length then there are duplicates in the array therefore it returns true
    }

    else {
        return false; //If the set size is equal to the nums length then there are only unique elements in the array therefore it returns false
    }
};

// ES6 syntax "..." copies an array's elements into another array or it can also be used in arguements

// hashtable method
// 132 ms
// 50.4 mb

var containsDuplicate = function(nums) {
    const hashTable = new Map(); // initializes hashtable
    for (let i = 0; i < nums.length; i++) { // runs through the length of the entire array
        if (hashTable.get(nums[i])) { // this if statement checks if the number is already in the hashtable
            return true; // if the number is already in the hashtable it returns true because there is a duplicate number
        }

        else { 
            hashTable.set(nums[i], true); // if the number isn't in the hashtable then it is placed into the hashtable, the true statement is just there to make sure the function doesnt end up undefined (can be replaced with something like '1')
        }
    }

    return false;
}

