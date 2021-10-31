Arrays 101 - Searching for Items in an Array
---
- *Search in an Array*
- [Check If N and Its Double Exist](https://github.com/woukl22/Leetcode/blob/main/Explore/Learn/Arrays%20101/Searching%20for%20Items%20in%20an%20Array/01_Check%20If%20N%20and%20Its%20Double%20Exist.cpp)
- [Valid Mountain Array](https://github.com/woukl22/Leetcode/blob/main/Explore/Learn/Arrays%20101/Searching%20for%20Items%20in%20an%20Array/02_Valid%20Mountain%20Array.cpp)

<br>

Summary
----
In this explore, we are going to learn two simple searching operation.<br>
1. Linear Search
2. Binary Search

<br>

### Linear Search
Linear search is check every element until we find element we looking for.<br>
In worst case, it will check all the element in Array. So time complexity is ```O(N)```.<br>

<br>

### Binary Search
Binary search can be use when all the elements in Array are in sorted order.<br>
We check middle element, and find whether element we are looking for is in left or right.<br>
If we go to one way(ex: left), and if we didn't find element, then check middle of left side elements again.<br><br>
Binary search is faster than linear search.<br>
*(I will learn binary search in ```Binary Search Explore Card``` later.)*
