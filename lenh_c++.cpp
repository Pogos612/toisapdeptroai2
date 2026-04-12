// cach chuyen thanh ky tu thuong
// for (int i = 0; i < length; ++i)
//     {
//         S1[i] = std::tolower(S1[i]);
//     }

// xoa dau cach o cuoi mot xau
//  if (S1[strlen(S1) - 1] == '\n')
//  {
//      S1[strlen(S1) - 1] = '\0';
//  }

// do dai cua mot xau
// int length = s.length();

// dao nguoc mot xau
// std::reverse(S1.begin(), S1.end());

// cach de in ra mot ky tu trong mot xau cua mot mang xau
// cout << S[vi tri cua xau trong mang][vi tri cua ki tu]

// cach de viet so mu
// pow(so, mu);

// cach de nhap mot xau nhieu hon mot tu
// getline(cin, s);

// cach de xac dinh do dai cua mot mang so nguyen
// int array[] = {20, 40, 10, 20, 40};
// int length = sizeof(array) / sizeof(array[0]);
// cout << length;

// cach sap xep lai mot mang hoặc xâu
// sort(array, array + (sizeof(array)/sizeof[0]));
// sort(s.begin(), s.end());

// Cách để giới hạn độ dài số thập phân sau dấu phẩy
// cout << fixed << setprecision(số lượng thập phân sau dấu phẩy) << con số(biến kết quả) << endl;

// cách chuyển một ký tự sang số thập phân và ngược lại
// s[i] = s[i] - '0';
// s[i] = s[i] + '0';

// gia tri tuyet doi
// abs()

/*vector
ten_vector.push_back(gia tri them vao): de tang them mot gia tri o cuoi vector
ten_vecto.size(): kích thước của vector
v.clear(): Xóa tất cả phần tử
v.insert(v.begin() + pos, x): Chèn x vào vị trí pos
v.pop_back(): Xóa phần tử cuối cùng
v.erase(v.begin() + vị trí muốn xoá): cách xoá phần tử trong một vị trí nhất định
v.erase(v.begin() + vị trí đầu, v.begin() + vị trí cuối): xoá một khoảng/đoạn phần tử
sort(v.begin(), v.end()): sắp xếp tăng dần
sort(v.rbegin(), v.rend()): sắp xếp giảm dần
reverse(v.begin(), v.end()): đảo ngược toàn bộ vector
*/

// cách xoá các phần tử trùng nhau trong một vector
// auto last = unique(v.begin(), v.end());     // Dời phần tử trùng về cuối
// v.erase(last, v.end());                     // Xóa phần trùng

// cách xoá các ký tự đặc biệt và dấu cách trong xâu
// s = std::regex_replace(s, std::regex("[^a-zA-Z0-9]"), "");

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    v.erase(v.begin() + 1, v.begin() + 4); // Xóa từ vị trí 1 đến 3 (20, 30, 40)

    for (int x : v)
        cout << x << ' '; // Output: 10 50
    return 0;
}