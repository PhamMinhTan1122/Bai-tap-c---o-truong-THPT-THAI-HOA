//Nhập vào 3 cạnh của một hình khối hộp chữ nhật và 2 cạnh của một khung hình chữ nhật rỗng.Hãy xét xem hình khối hộp chữ nhật có thể chui qua khung chữ nhật rỗng được hay không?
#include "../include.cpp"
int main()
{
    // canh hinh hop chu nhat
<<<<<<< HEAD
    float hcn_1, hcn_2, hcn_3,dt_hcn_1,dt_hcn_2,dt_hcn_3; //hcn 3 la chieu cao, 1 la chieu dai ,b la chieu cao
    // canh hinh chu nhat rong
    float khung_1,khung_2,dt_khung;
    printf("Nhap canh a cua hcn:\n");
    cin >> hcn_1;
    printf("Nhap canh b cua hcn:\n");
    cin>> hcn_2;
    printf("Nhap chieu cao cua hcn:\n");
    cin>> hcn_3;
    printf("Nhap chieu dai cai khung:\n");
    cin >> khung_1;
    printf("Nhap chieu rong cai khung:\n");
=======
    float hcn_1, hcn_2, hcn_3,dt_hcn_1,dt_hcn_2,dt_hcn_3,khung_1,khung_2,dt_khung; //hcn 3 la chieu cao
    // canh hinh chu nhat rong
    printf("Nhap chieu dai:\n");
    cin >> hcn_1;
    printf("Nhap chieu rong:\n");
    cin >> hcn_2;
    printf("Nhap chieu cao:\n");
    cin >> hcn_3;
    printf("Nhap chieu dai khung rong:\n");
    cin >> khung_1;
    printf("Nhap chieu rong khung rong:\n");
>>>>>>> 4b32ee0c44cbfc9505e55f510aa9187d2abac6d7
    cin >> khung_2;
    //tinh dien tich
/*     dt_hcn_1 =  hcn_1 * hcn_2;
    dt_hcn_2 =  hcn_2 * hcn_3;
    dt_hcn_3 =  hcn_1 * hcn_3;
    dt_khung =  khung_1 * khung_2;
<<<<<<< HEAD
    printf("Dien tich hinh hop chu nhat_1 la: %f\n", dt_hcn_1);
    printf("Dien tich hinh hop chu nhat_2 la: %f\n", dt_hcn_2);
    printf("Dien tich hinh hop chu nhat_3 la: %f\n", dt_hcn_3);
    printf("Dien tich hinh khung la: %f\n", dt_khung);
=======
    printf("Dien tich hinh hop chu nhat_1 la: %.2f\n", dt_hcn_1);
    printf("Dien tich hinh hop chu nhat_2 la: %.2f\n", dt_hcn_2);
    printf("Dien tich hinh hop chu nhat_3 la: %.2f\n", dt_hcn_3);
    printf("Dien tich hinh khung la: %.2f\n", dt_khung);
>>>>>>> 4b32ee0c44cbfc9505e55f510aa9187d2abac6d7
    if(dt_hcn_1 >= dt_khung || dt_hcn_2 >= dt_khung || dt_hcn_3 >= dt_khung)
    {
        printf("Chui qua ");
    }
    else
    {
        printf("ko chui qua\n");
    } */
    if ( hcn_1 && hcn_2 <= khung_1&&khung_2 || hcn_2&&hcn_3 <= khung_1&&khung_2 || hcn_1&&hcn_3 <= khung_1&&khung_2)
    {
        printf("Chui qua");
    }else 
    {
        printf("Khong chui qua");
    }


<<<<<<< HEAD

=======
>>>>>>> 4b32ee0c44cbfc9505e55f510aa9187d2abac6d7
}