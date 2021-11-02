Arrays 101 - In-Place Operations
---
- *In-Place Array Operations Introduction*
- [Replace Elements with Greatest Element on Right Side](https://github.com/woukl22/Leetcode/blob/main/Explore/Learn/Arrays%20101/In-Place%20Operations/01_Replace%20Elements%20with%20Greatest%20Element%20on%20Right%20Side.cpp)
- *A Better Repeated Deletion Algorithm - Intro*
- [Remove Duplicates from Sorted Array](https://github.com/woukl22/Leetcode/blob/main/Explore/Learn/Arrays%20101/In-Place%20Operations/02_Remove%20Duplicates%20from%20Sorted%20Array.cpp)
- *A Better Repeated Deletion Algorithm - Answer*
- [Move Zeroes](https://github.com/woukl22/Leetcode/blob/main/Explore/Learn/Arrays%20101/In-Place%20Operations/03_Move%20Zeroes.cpp)
- [Sort Array By Parity]()
- [Remove Element]()

<br>

Summary
---
### In-Place Array Operations Introduction
In-Place is not using additional space.<br>
When we use in-place way, we'd not make new Array for result Array.<br>
In-place is for minimize space and time complexity.<br>

<br>

### A Better Repeated Deletion Algorithm
**Two-pointer technique** *(example: 02_Remove Duplicates from Sorted Array)* <br>
If we use two-pointer technique, we don't need to use additional array called ```expectedNums```.<br>
Overwriting original array.<br><br>
Use two pointer ```writePointer``` and ```readPointer```.<br>
*(In my 02_Remove Duplicates from Sorted Array.cpp code, I use ```k``` and ```i``` variable for pointer.)*<br>
```writePointer``` count number of no duplicate, and ```readPointer``` count all the Array.<br>
Two-pointer technique makes lower space complexity.<br>

<br>

### When to Use In-Place Array Operations
It might not use everytime. It's important to know when we use in-place Array operations.<br>
If we need original Array later, than we shouldn't overwrite.<br>
<br>
In-Place operations are important to reduce space complexity of an algorithm.<br>
We can reduce it to ```O(1)``` instead of ```O(N)```.
