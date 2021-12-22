# Diagonal Traverse

### Problem

![image](https://user-images.githubusercontent.com/69896250/146936024-7e676f7e-88b4-4197-8992-bee6485eb04c.png)

<br>

```
1 [0][0]  2 [0][1]  3 [0][2]
4 [1][0]  5 [1][1]  6 [1][2]
7 [2][0]  8 [2][1]  9 [2][2]

=> 1 2 4 7 5 3 6 8 9
```

#### 2021.12.21 
```
1
2, 4
7, 5, 3
6, 8
9

합이 0 => [0][0] 
합이 1 => [0][1] [1][0] 
합이 2 => [2][0] [1][1] [0][2]
합이 3 => [1][2] [2][1]
합이 4 => [2][2]
```

#### 2021.12.22
```
대각선   [row][column]
0번째 => [0][0] 
1번째 => [0][1] [1][0] 
2번째 => [2][0] [1][1] [0][2]
3번째 => [1][2] [2][1]
4번째 => [2][2]

0번째 -> 1번째 column++
1번째 -> 2번째 row++
2번째 -> 3번째 column++
3번째 -> 4번째 row++

짝수번째 column++
홀수번째 row++

짝수번째 대각선과 홀수번째 대각선을 구분하는 방법?
짝수: (row+column)%2 == 0
홀수: (row+column)%2 != 0

다음 대각선으로 넘어가기 전에 대각선에 있는 숫자를 전부 확인하려면?
min = 0
max = size(mat)-1
짝수번째이고, row가 min이 아니면 row--
짝수번째이고, column이 max가 아니면 column++
홀수번째이고, row가 max가 아니면 row++
홀수번째이고, column이 min이 아니면 column--

line_num은 전체 대각선의 개수: line_num = size(mat)*2-1
line: n번째 대각선을 의미
count: 각 대각선에서 확인한 숫자의 개수
line < size(mat)이고, line+1 == count 이면 line++
line >= size(mat)이고, size(mat)-((line+1)-size(mat)) == 2*size(mat)-line-1이면 line++

while(line < line_num)으로 전체 반복
```

```
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int line=0, line_num = 2*size(mat)-1, count=0;
        int row=0, column=0;
        int min=0, max=size(mat)-1;
        while(line < line_num){
            cout << row << " " << column << " " << count << '\n';
            if(line == 0){
                line++;
                column++;
            } else if(line%2 == 0){
                if((line < size(mat) && line+1 == count) || (line >= size(mat) && 2*size(mat)-line-1 == count)){
                    if(column < max){
                        column++;    
                    } else{
                        row++;
                    }
                    line++;
                    count = 0;
                } else{
                    if(row != min){
                        row--;
                    }
                    if(column != max){
                        column++;
                    }
                    count++;
                }
            } else{
                if((line < size(mat) && line+1 == count) || (line >= size(mat) && 2*size(mat)-line-1 == count)){
                    if(row < max){
                        row++;
                    } else{
                        column++;
                    }
                    line++;
                    count = 0;
                } else{
                    if(row != max){
                        row++;
                    }
                    if(column != min){
                        column--;
                    }
                    count++;
                }
            }
        }
        return ans;
    }
};

출력:
0 0 0
0 1 0
1 0 1
2 0 2
2 1 0
1 2 1
0 2 2
0 2 3
1 2 0
2 1 1
2 0 2
2 1 0
1 2 1
```
