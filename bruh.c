#include <stdio.h>

int main()
{
    int n;
    float array[35];
    float tong_chi_tieu = 0.0;
    float chi_tieu_trung_binh = 0.0;
    float chi_tieu_cao_nhat = 0.0;
    int ngay_chi_tieu_cao_nhat = 0;
    float chi_tieu_thap_nhat = 0.0;
    int ngay_chi_tieu_thap_nhat = 0;

    printf("Nhap so ngay chi tieu (n <= 31): ");
    scanf("%d", &n);
    while (n > 31 || n <= 0)
    {
        printf("So ngay khong hop le, vui long nhap lai so ngay: ");
        scanf("%d", &n);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Nhap chi tieu ngay %d: ", i + 1);
        scanf("%f", &array[i]);
        while (array[i] < 0)
        {
            printf("Nhap lai chi tieu ngay %d: ", i + 1);
            scanf("%f", &array[i]);
        }

        tong_chi_tieu = tong_chi_tieu + array[i];

        if (i == 0 || array[i] > chi_tieu_cao_nhat)
        {
            chi_tieu_cao_nhat = array[i];
            ngay_chi_tieu_cao_nhat = i + 1;
        }
        if (i == 0 || array[i] < chi_tieu_thap_nhat)
        {
            chi_tieu_thap_nhat = array[i];
            ngay_chi_tieu_thap_nhat = i + 1;
        }
    }

    chi_tieu_trung_binh = tong_chi_tieu / (float)n;

    printf("\n--- KET QUA ---\n");
    printf("Tong chi tieu la: %.2f \n", tong_chi_tieu);
    printf("Trung binh chi tieu moi ngay: %.2f \n", chi_tieu_trung_binh);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == chi_tieu_cao_nhat)
        {
            printf("Ngay %d co chi tieu cao nhat: %f \n", i + 1, chi_tieu_cao_nhat);
        }

        if (array[i] == chi_tieu_thap_nhat)
        {
            printf("Ngay %d co chi tieu thap nhat: %f \n", i + 1, chi_tieu_thap_nhat);
        }
    }
    return 0;
}