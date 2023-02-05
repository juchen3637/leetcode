/*
Break into 2 different arrays, one array to the left of the self element, one to the right of the self element.
Multiply all of the nums in each array respectivly and then combine into one singular array that will be returned.
*/

var productExceptSelf = function(nums) {
    let res = []; // initializes the array we will return later as the answer
    let left = 1; // this will be multiplying numbers coming from the left of the nums array
    let right = 1; // this will be multiplying numbers coming from the right of the nums array
    for(let i=0;i<nums.length;i++){ // this iterates through all the numbers left of the self element in the array
        res[i] = left; // puts value of left into res array
        left = left*nums[i]; // sets left equal to the product of left and current nums value left of self nums value
    }

    for(let i=nums.length-1;i>=0;i--){ // this iterates through all the numbers right of the self element in the array
        res[i] = right*res[i]; // puts value of right into res array
        right = right*nums[i]; // sets right equal to the product of right and current nums value right of self element
    }
    return res;
};