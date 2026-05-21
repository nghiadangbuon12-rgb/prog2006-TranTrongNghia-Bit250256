void bai1() {
    int n;
    cout << "Nhap mot so: ";
    cin >> n;

    if (n % 2 == 0)
        cout << n << " la so chan";
    else
        cout << n << " la so le";
}

// ================= Bài 2 =================
void bai2() {
    double W, H;

    cout << "Nhap W: ";
    cin >> W;

    cout << "Nhap H: ";
    cin >> H;

    double S = W * H;

    cout << "Dien tich = " << S;
}

// ================= Bài 3 =================
void bai3() {
    int n;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Cac so tu " << n << " den 1:\n";

    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
}

// ================= Bài 4 =================
void bai4() {
    double a, b;

    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0)
            cout << "Phuong trinh vo so nghiem";
        else
            cout << "Phuong trinh vo nghiem";
    } else {
        double x = -b / a;
        cout << "Nghiem x = " << x;
    }
}

// ================= Bài 5 =================
int timMax(int a[], int n) {
    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

void bai5() {
    int n;

    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[100];

    cout << "Nhap cac phan tu:\n";

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Gia tri lon nhat la: " << timMax(a, n);
}

// ================= Bài 6 =================
void bai6() {
    int n;

    cout << "Nhap so tu 1-7: ";
    cin >> n;

    switch (n) {
        case 1:
            cout << "Thu Hai";
            break;
        case 2:
            cout << "Thu Ba";
            break;
        case 3:
            cout << "Thu Tu";
            break;
        case 4:
            cout << "Thu Nam";
            break;
        case 5:
            cout << "Thu Sau";
            break;
        case 6:
            cout << "Thu Bay";
            break;
        case 7:
            cout << "Chu Nhat";
            break;
        default:
            cout << "Khong hop le";
    }
}

// ================= Bài 7 =================
void bai7() {
    int n;
    int S = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        S += i;
    }

    cout << "Tong S = " << S;
}

// ================= Main =================
int main() {
    int choice;

    do {
        cout << "\n========= MENU =========\n";
        cout << "1. Kiem tra chan/le\n";
        cout << "2. Tinh dien tich\n";
        cout << "3. In tu n den 1\n";
        cout << "4. Giai phuong trinh bac 1\n";
        cout << "5. Tim max trong mang\n";
        cout << "6. In thu trong tuan\n";
        cout << "7. Tinh tong 1 + 2 + ... + n\n";
        cout << "0. Thoat\n";

        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            case 4:
                bai4();
                break;
            case 5:
                bai5();
                break;
            case 6:
                bai6();
                break;
            case 7:
                bai7();
                break;
            case 0:
                cout << "Tam biet!";
                break;
            default:
                cout << "Lua chon khong hop le!";
        }

    } while (choice != 0);

    return 0;
}
