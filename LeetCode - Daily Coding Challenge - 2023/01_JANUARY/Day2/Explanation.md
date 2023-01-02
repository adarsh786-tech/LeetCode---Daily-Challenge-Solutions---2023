# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
As we read the problem statement itself, we can identify that we only need to handle 3 scenarios:
1. The given word should have all characters in upper case **(ALL CAPS)**.
2. The given word should have all characters in lower case **(ALL NON CAPS)**.
3. The given word should have only first character in upper case.

Once we understand these 3 scenarios, we are good to go.

# Approach
<!-- Describe your approach to solving the problem. -->
To modularise the program, 3 helper functions are created which will help us tackle the 3 scenarios.
The first function `bool isAllCaps(word) {}` takes given word as a parameter and returns true if every letter is capital.

The second function `bool isFirstLetterOnlyCaps(string word) {}` takes given word as a parameter and returns true if and only if the first character is capital.

The third and final function is `bool isNotAllCaps(string word) {}` which takes given word as a parameter and returns true if every letter in non capital.

Now, we can just run a simple `if else` statement to check for the scenarios.

To handle the scenario where only the first character has to be capital, we can find the substring of the word which will not include the first character and check if the substring has all letters in lower case.

# Complexity
- **Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The Expected Time Complexity is: `O(n)` because we traverse the entire string to check for all characters to be either all lower case or all upper case.

- **Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The Expected Space Complexity is: `O(1)` since we are not using any additional or auxiliary space.

