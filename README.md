# SEstudio_ThinkingProgramming_02

## Nội dung môn học
1. Các kiến thức về tư duy lập trình
2. Các kỹ thuật lập trình cơ bản
    - Kỹ thuật lính canh
    - Kỹ thuật cờ hiệu
    - Kỹ thuật tìm kiếm
    - Kỹ thuật sắp xếp
    - Kỹ thuật xử lý mảng 1 chiều
    - Kỹ thuật xử lý chuỗi
    - Kỹ thuật xử lý mảng 2 chiều (ma trận)
3. Kỹ thuật lập trình hướng đối tượng
    - Thiết kế lớp đối tượng
    - Kỹ thuật lập trình đa hình (kế thừa)
    - Kỹ thuật lập trình đa xa
4. Các kỹ thuật lập trình nâng cao
    - Kỹ thuật xử lý con trỏ
    - Kỹ thuật tính toán trên địa chỉ ô nhớ 
    - Kỹ thuật xử lý mãng động
    - Kỹ thuật lập trình đệ quy
        - Đệ quy tuyến tính
        - Đệ quy phi tuyến
        - Đệ quy hỗ tương
    - Kỹ thuật xử hàng đợi (Queue)
    - Kỹ thuật xử lý ngăn xếp (Stack)
    - Kỹ thuật xử lý Danh sách liên kết
    - Kỹ thuật xử lý Cây
        - Cây nhị phân (BST -  Binary Search Tree)
        - Cây nhị phân cân bằng (AVT)
        - Cây đỏ - đen (Red Black Tree)

## Code convention - qui định phương thức đặt tên hàm - biến
- Tên biến:
```c++
    int bienSoNguyen;
```

- Attribute của Class
```c++
    class Product
    {
        private:
            int m_productID;
    }
```

- Tên Hàm: 
``` c++
CongHaiPhanSo()
```

- Tên Class
```c++
    class PhanSo
    {
        // code here
    }
```

- Khai báo nhiều biến
```c++
    int a; 
    int b; 
    int c = 0;
    double d = 0.1;
    float e = 0.2;
```

- Tên của HẰNG SỐ
```c++
    define MAXIMUM 100
    const int MAX = 100;
```

- Qui tắt sử dụng khoản trắng
    - Trước và sau toán tử: 
```c++
    n = a + b;
```

    - Câu lệnh IF
    
```c++
        if (a == b)
        {
            // code here
        }
```
    - Câu lệnh SWITCH
```c++
        switch (n)
        {
            case 1:
                // code here
                break;
            case 2: 
                // code here
                break;
            default:
                // code here
        }
```
    - Câu lệnh FOR
```c++
        for(int i = 0; i < n; i++>)
        {
            // code here
        }
```
    - Câu lệnh WHILE và DO WHILE
```c++
        while (a == b) 
        {
            // code here
        }

        do
        {
            // code here
        } while (a == b);
```