Arrays 101 - Deleting Items From an Array
---
- *Array Deletions*
- [Remove Element](https://github.com/woukl22/Leetcode/blob/main/Explore/Learn/Arrays%20101/Deleting%20Items%20From%20an%20Array/01_Remove%20Element.cpp)
- [Remove Duplicates from Sorted Array]()

<br>

Summary
----
Deletion has three case like insertion.
1. Deleting the last element of the Array.
2. Deleting the first element of the Array.
3. Deletion at any given index.

<br>

### Deleting the last element of the Array.
I have Array about length 3.<br>
```
int arr[6];
int length = 0;

for(int i = 0; i < 3; i++){
  arr[i] = i;
  length++;
}
```
If you want to delete last element of this Array, just reduce ```length``` value.<br>
Then, it will print 2 of Array.

```
length--;

for(int i = 0; i < length; i++){
  cout << arr[i] << '\n';
}
```

<br>

### Deleting the first element of the Array.
This case is costliest of deletion for Array.<br>
If delete first element, we need to shift other element to left.<br>
It takes ```O(N)``` time, and ```N``` is the number of element.
```
for (int i = 1; i < length; i++) {
    int_array[i - 1] = int_array[i];
}

length--;
```
<br>

### Deletion at any given index.
If I want to deleting at any given index inside the Array, all the element have to shift to the left after given index.<br>
It takes ```O(K)``` time, and ```K``` is number of element after given index.<br>
Potentially ```K = N```, so we say it also take ```O(N)``` time.
```
//given index: 1
for (int i = 2; i < length; i++) {
    int_array[i - 1] = int_array[i];
}

length--;
```
