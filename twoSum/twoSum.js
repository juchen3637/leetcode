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

//learn how to use hashtable for this 