# Arrays And Strings
Experiment_7
## AIM
To study use of and to implement arrays and strings in C++.

## Software used
VScode,Dev C++

## Theory

### Arrays in C++
An array in C++ is a collection of elements of the same type stored in contiguous memory locations. Arrays are used to store multiple values of the same type in a single variable, which can be efficiently accessed using an index.
![image](https://github.com/user-attachments/assets/1aaac983-8df7-4874-8682-5f1f39eaf7f8)


**Properties :**
-An Array is a collection of data of the same data type, stored at a contiguous memory location.
-Indexing of an array starts from 0. It means the first element is stored at the 0th index, the second at 1st, and so on.
-Elements of an array can be accessed using their indices.
-Once an array is declared its size remains constant throughout the program.
-An array can have multiple dimensions.
-The size of the array in bytes can be determined by the sizeof operator using which we can also find the number of elements in the array.
-We can find the size of the type of elements stored in an array by subtracting adjacent addresses.

**Initializing Arrays:**
Arrays can be initialized at the time of declaration.
int numbers[5] = {1, 2, 3, 4, 5}; // Array initialized with values

### Strings in C++
Strings are sequences of characters and are used to store text. In C++, the `string` class is defined in the ```<string>``` header file. There are two types of strings in C++ : <br>
1. C style Strings
2. std : : string

**Features:**
- Iteration: Strings support iterations for traversing thier contents.
- Concatenation: Strings can be concatenated using the `+` operator.
- Indexing: Strings support indexing, allowing access to individual characters using the `[]` operator.
- Comparison: Strings can be compared using operators `(==, !=, <, >, etc.)`.

**Example:**
An array of strings
```cpp
string str1 = "Hello"; 
```
## Algorithms
## Printing Array Elements

1. **Initialize the Array:**
   - Define an array `x` of size 6 with the elements `{19, 10, 8, 6, 8}`.

2. **Loop Through Array:**
   - Use a `for` loop in the array.

3. **Print Each Element:**
   - Inside the loop, print each element of the array followed by a newline.

4. **End Program:**
   - Complete the program by returning `0`.

## Sum of Elements
To compute the sum of all elements in an array, iterate through the array and accumulate the values.
Algorithm:
1.	Initialize a variable sum to 0.
2.	Loop through each element of the array.
3.	Add each element's value to sum.
4.	Print or return sum.
## Average of Elements
To find the average, compute the sum of all elements and divide by the number of elements.
Algorithm:
1.	Calculate the sum of elements (as above).
2.	Divide the sum by the number of elements.
3.	Print or return the average.
4.	End program
## Maximum Element and Minimum Element
To find the maximum element, compare each element and track the highest value.
Algorithm:
1.	Initialize a variable max with the value of the first element.
2.	Loop through the array.
3.	Update max if a larger value is found.
4.	Print or return max.
5.	End Program
To find the minimum element, compare each element and track the smallest value.
Algorithm:
1.	Initialize a variable min with the value of the first element.
2.	Loop through the array.
3.	Update min if a smaller value is found.
4.	Print or return min.
5.	End Program

### Checking Palindrome


1. **Input the String:**
   - Ask the user to enter a string.

2. **Initialize Variables:**
   - Store the input string in a variable, `a`.
   - Initialize an empty string, `revstr`.

3. **Determine the Length:**
   - Calculate the length of `a` and store it in the variable `length`.

4. **Reverse the String:**
   - Loop from the end of the string to the beginning:
     - Append each character to `revstr`.

5. **Compare the Strings:**
   - Compare the original string `a` with the reversed string `revstr`.
   - If `a` == `revstr`, the string is a palindrome.
   - Else not a palindrome.

6. **Output the Result:**
   - Print whether the string is a palindrome or not based on the comparison

7.**End Program:**

## Search in an Array


1. **Initialize Variables:**
   - Define a variable `key` to store the user's input.
   - Define an integer `i` for loop iteration.
   - Define an array `x` with 5 elements `{34, 56, 78, 90, 20}`.

2. **Input the Key:**
   - Askt the user to enter a number and store the input in the variable `key`.

3. **Search for the Key:**
   - Use `for` loop to iterate the array `x`.
   - Compare the element `x[i]` with `key` in each step.

4. **Check for Match:**
   - If a match is found (`key == x[i]`), print `i` where the key is found and exit the loop using `break`.

5. **Check if Not Found:**
   - After the loop, if no match was found (`i == 5`), print "Number not found".

6. **End Program:**

## Concatenation
To concatenate two strings, append the second string to the first.
Algorithm:
1.	Initialize two strings str1 and str2.
2.	Append str2 to str1.
3.	Print or return the concatenated string.
4.	End Program
## Reverse the String
To reverse a string, rearrange the characters from end to start.
Algorithm:
1.	Initialize a variable reversed as an empty string or character array.
2.	Iterate through the original string from end to start.
3.	Append each character to reversed.
4.	Print or return the reversed string.
5.	End Program

### Conclusion:
From This experiment We have learned and understand the arrays declaration,initialization and operations and strings declaration initialization and operation in the programs.





