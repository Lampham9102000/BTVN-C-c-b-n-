I.	C Cơ bản
1.	Biến
a.	Khái niệm về biến
b.	Cách khai báo biến
- Tên không chứa các lệnh, khoảng trắng, không bắt đầu bằng số
c.	Kích thước của biến
d.	Các kiểu dữ liệu: - int, float, char, double,... - uint8_t, uint16_t,... (Giới thiệu về thư viện <stdint.h>)
3.	Hàm
-	Main là một từ khóa hay hàm được định nghĩa sẵn trong C. Nó là hàm đầu tiên của mọi chương trình C.
-	Có tác dụng bắt đầu và kết thúc một chương trình.
-	Có kiểu dữ liệu trả về là int hoặc void
a.	Hàm không có giá trị trả về (void)
b.	Hàm có giá trị trả về
c.	Tham số của hàm
4.	Câu Điều Kiện
 .	Cấu trúc if
a.	Cấu trúc if-else
b.	Cấu trúc if-else if-else
5.	Switch-Case
 .	Cách sử dụng switch-case
a.	break và default trong switch-case
b.	Ví dụ và bài tập
6.	Vòng Lặp
 .	Vòng lặp for
a.	Vòng lặp while
b.	Vòng lặp do-while
c.	Cách sử dụng break và continue
d.	Ví dụ và bài tập
7.	Typedef
 -	 Hay dùng cho struct và union viết cho gọn 
-	Ví dụ: 
•	Typedef unsigned char byte; byte var1; byte giờ có kiểu như unsigned chat
•	Lỗi thường gặp: person1 và person2 lúc này là bí danh của kiểu struct person chứ không phải là 1 biến.

![image](https://github.com/Lampham9102000/BTVN-C-c-b-n-/assets/150152751/c157097c-9c7f-4f9b-9f7d-bb962fd626ff)
a.	Cách sử dụng typedef
8.	Struct
 .-	Là tập hợp các biến( có thể thuộc những kiểu dữ liệu khác nhau) được gộp lại với một cái tên duy nhất.
-	Khai báo struct: ta dùng từ khóa struct 
a.	Khai báo và sử dụng cấu trúc
-	Tạo biến struct datatype variableName
•	struct Person person1;
•	struct Person person2;
•	cách khác
b.	Truy cập thành viên của cấu trúc
-	Truy cập biến thành viên của struct: 
•	ta sử dụng toán tử   để truy cập biến thành viên của struct. Example person1.age =25.
•	Vừa khai báo vừa khởi tạo: struct Person person = {.age =25, .name = lam} = {25,lam};
9.	Enum
 .	Khái niệm và mục đích của enum
a.	Cách khai báo và sử dụng
b.	Ví dụ thực hành
10.	Con Trỏ
 .	Khái niệm về con trỏ
a.	Cách khai báo và sử dụng con trỏ
-	Con trỏ là một tính năng mạnh mẽ của lập trình C cho phép chúng ta làm việc vói các địa chỉ bộ nhớ.
-	Bộ định dạng địa chỉ của biến có dạng %p  để truy cập giá trị địa chỉ của bộ nhớ thông qua &variable
-	Con trỏ là một ký hiệu đặc biệt lưu địa chỉ của biến chứ không lưu giá trị.
•	Tạo con trỏ: int* pt; như vậy tại địa chỉ mà pointer chỉ đến chứa kiểu dữ liệu int
•	Gán địa chỉ cho con trỏ: int* pt; pt = &number;
•	pt là con trỏ trong khi *pt là biểu thị dữ liệu được trỏ bởi địa chỉ pt
b.	Các thao tác cơ bản với con trỏ
11.	Mảng
a.	Mảng một chiều - Khái niệm, khai báo và khởi tạo - Truy cập phần tử mảng
a.	Mảng hai chiều - Khái niệm, khai báo và khởi tạo - Truy cập phần tử mảng
a.	Ví dụ và bài tập
