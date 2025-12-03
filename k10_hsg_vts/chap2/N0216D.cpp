#include <iostream>
#include <string>

using namespace std;

// Hàm chính gi?i quy?t bài toán
void solve() {
    // Khai báo bi?n
    int d, m;
    // Dùng long long cho nam y (<= 10^9)
    long long y; 
    
    // NH?P D? LI?U ÐON GI?N
    if (!(cin >> d >> m >> y)) {
        return; 
    }

    // --- B?t d?u thu?t toán tính toán (Zeller's Congruence) ---
    
    // 1. Ði?u ch?nh tháng và nam: Tháng 1 & 2 (m < 3) coi là tháng 13 & 14 c?a nam tru?c
    if (m < 3) {
        m += 12;
        y--;
    }

    // 2. Tách nam thành th? k? (C) và nam trong th? k? (K)
    long long C = y / 100;
    long long K = y % 100;
    
    // 3. Áp d?ng Công th?c
    // F = d + floor((13*(m+1))/5) + K + floor(K/4) + floor(C/4) - 2*C
    long long F = d + (13 * (m + 1)) / 5 + K + K / 4 + C / 4 - 2 * C;

    // 4. L?y modulo 7
    // Index: 0 = Saturday, 1 = Sunday, ..., 6 = Friday
    // C?ng 700 d? x? lý tru?ng h?p F là s? âm
    int dayIndex = (int)((F % 7 + 700) % 7); 

    // 5. Ánh x? k?t qu? sang tên ngày b?ng SWITCH CASE
    string result;
    switch (dayIndex) {
        case 0:
            result = "Saturday";
            break;
        case 1:
            result = "Sunday";
            break;
        case 2:
            result = "Monday";
            break;
        case 3:
            result = "Tuesday"; 
            break;
        case 4:
            result = "Wednesday";
            break;
        case 5:
            result = "Thursday";
            break;
        case 6:
            result = "Friday";
            break;
        default:
            result = "Error"; 
            break;
    }

    cout << result << endl; 
}

int main() {
    solve();
    return 0;
}
