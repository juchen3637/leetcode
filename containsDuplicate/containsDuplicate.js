//brute force method
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

//learn how to use hashtable for this 