Arrays 101 - Inserting Items Into an Array
---
- *Basic Array Operations*
- *Array Insertions*
- [Duplicate Zeros]()
- [Merge Sorted Array]()

<br>

Summary
----
Array has three basic operation.
1. Insert
2. Delete
3. Search

And I learn insertion in this chapter.
1. Inserting a new element at the end of the Array.
2. Inserting a new element at the beginning of the Array.
3. Inserting a new element at any given index inside the Array.

### Inserting a new element at the end of the Array.
If I want to inserting at the end of the Array. I need to count Array length.<br>
```
int arr[6];
int length = 0;

for(int i = 0; i < 3; i++){
  arr[i] = i;
  length++;
}
```
In this code, ```length ``` variable has next index of last index.<br>
So whenever I want to insert a new element in this Array, use ```length``` variable.
```
arr[length] = 10;
length++;
```

<br>

### Inserting a new element at the beginning of the Array.
Inserting at the beginning of the Array, all the element need to shift to next index.<br>
```
for (int i = 3; i >= 0; i--) {
    arr[i + 1] = arr[i];
}

arr[0] = 20;
```

If inserting at the beginning of the Array, it's time complexity will ```O(N)```.<br>
```N``` is length of Array.

<br>

### Inserting a new element at any given index inside the Array.
If I want to inserting at any given index inside the Array, it has to shift the elements after given index.<br>
```
// given index: 2;
for (int i = 4; i >= 2; i--)
{
    arr[i + 1] = arr[i];
}

arr[2] = 17;
```
