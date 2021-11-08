Array and String - [Introduction to Array](https://leetcode.com/explore/learn/card/array-and-string/201/introduction-to-array/)
---
```
In this chapter, we are going to introduce two important concepts: array and dynamic array.

These are the basic data structure you should be familiar with. 
We also provide a tutorial for you to use the built-in array and dynamic array.

By completing this chapter, you should be able to answer the following questions:

1. What is the difference between array and dynamic array?
2. What is the corresponding built-in data structure of array and dynamic array in your frequently-used language?
3. How to perform basic operations (initialization, data access, modification, iteration, sort, etc) in an array?
4. How to perform basic operations (initialization, data access, modification, iteration, sort, addition, deletion, etc) in a dynamic array?
```

- *Introduction to Array*
- *Introduction to Dynamic Array*
- [Find Pivot Index](https://github.com/woukl22/Leetcode/blob/main/Explore/Learn/Array%20and%20String/Introduction%20to%20Array/01_Find%20Pivot%20Index.cpp)
- [Largest Number At Least Twice of Others](https://github.com/woukl22/Leetcode/blob/main/Explore/Learn/Array%20and%20String/Introduction%20to%20Array/02_Largest%20Number%20At%20Least%20Twice%20of%20Others.cpp)
- [Plus One]()

<br>

Summary
---
### Introduction to Array
An **array** is a basic data structure to **store a collection of elements sequentially**.<br>

#### Operations in Array

1. Initialize
```
    int arr0[10];
    int arr1[10] = {1, 2, 3, 4, 5, 6};  // other element will be set as the default value
```

2. Get Length
```
    int size = sizeof(arr1) / sizeof(*arr1);
    cout << "The size of a1 is: " << size << '\n';
```

3. Access Element
```
    cout << "The first element is: " << arr1[0] << '\n';
```
4. Iterate all Elements
```
    cout << "[Version 1] The contents of arr1 are:";
    for (int i = 0; i < size; ++i) {
        cout << " " << arr1[i];
    }
    cout << '\n';
    cout << "[Version 2] The contents of arr1 are:";
    for (int& item: arr1) {
        cout << " " << item;
    }
    cout << '\n';
```

5. Modify Element
```
    arr1[0] = 7;
```

6. Sort
```
    sort(arr1, arr1 + size);
```

<br>

### Introduction to Dynamic Array
Array has a **fixed capacity** but dynamic array has **variable size**.<br>
In C++, we can use ```vector```.<br>

#### Operations in Dynamic Array

1. initialize
```
    vector<int> vec0;
    vector<int> vec1(10, 0);
```

2. make a copy
```
    vector<int> vec2(vec1.begin(), vec1.end());
    vector<int> vec3(vec2);
```    

3. cast an array to a vector
```
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec4(arr, *(&arr + 1));
```

4. get length
```
    cout << "The size of vec4 is: " << vec4.size() << '\n';
``` 

5. access element
```
    cout << "The first element in vec4 is: " << vec4[0] << '\n';
``` 

6. iterate the vector
```
    cout << "[Version 1] The contents of vec4 are:";
    for (int i = 0; i < vec4.size(); ++i) {
        cout << " " << vec4[i];
    }
    cout << '\n';
    cout << "[Version 2] The contents of vec4 are:";
    for (int& item : vec4) {
        cout << " " << item;
    }
    cout << '\n';
    cout << "[Version 3] The contents of vec4 are:";
    for (auto item = vec4.begin(); item != vec4.end(); ++item) {
        cout << " " << *item;
    }
    cout << '\n';
```

7. modify element
```
    vec4[0] = 10;
```
    
8. sort
```
    sort(vec4.begin(), vec4.end());
```
    
9. add new element at the end of the vector
```
    vec4.push_back(-1);
```    

10. delete the last element
```
    vec4.pop_back();
```
