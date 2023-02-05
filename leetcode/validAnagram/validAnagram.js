//hashtable method

var isAnagram = function(s, t) {
    const hashTable = {}; // initializes hashtable
    if (s.length != t.length){ // if the length of the two words are not the same then it cannot be a anagram
        return false; // returns false
    }

    else {
        for(let i = 0; i < s.length; i++) { // iterates through entire length of string s
            if (!hashTable[s[i]]) { // this if statement checks if the letter exists in the hashtable
                hashTable[s[i]] = 0; // if the letter does not exist then it added to the hashtable and set equal to 0
            }
            hashTable[s[i]]++; // this is increasing the number/frequency of the letter 
        }

        for (let j = 0; j < t.length; j++) { // iterates through entire length of string t
            if (!hashTable[t[j]]) { // this if statement checks if the letters in string t exists in the hashtable
                return false // if the letter does not already exist in the hashtable then it is a new letter that does not exist in string s which means it is not an anagram, returns false
            }
            hashTable[t[j]]--; // if the letter already exists in the hashtable then it is subtracted 
        }

        return true; // if all the letters are subtracted fine and no errors occur then it is a anagram
    }
};  