#include<stdio.h>
#include"main.h"

int main()
{
    int UserChoice;


    do{
    printf("\n\n\n");
    printf("======================[ MENU CHINH ]======================\n");
    printf("1) Sap xep danh sach ten dua vao do tuoi cua tung nguoi \n");
    printf("2) Check password\n");
    printf("3) Tim file dinh dang txt va doc noi dung file\n");
    printf("4) Tinh tien dien dua vao so cong to cung cap\n");
    printf("5) May tinh co ban\n");
    printf("0) thoat chuong trinh\n");
    printf("==========================================================\n");
    printf("Nhap vao lua chon cua ban: ");
    scanf("%i", &UserChoice);
    getchar();
    printf("\n\n");


    switch(UserChoice)
    {
    case 1:
        Nghia_1();
        break;

    case 2:
        Diep_1();
        break;

    case 3:
        Diep_2();
        break;

    case 4:{
        float sodien;
        printf("Nhap so dien su dung: ");
        scanf("%f", &sodien);
        tinhtiendien(sodien);
        break;
        }

    case 5:
        maytinh();
        break;

    case 0:
        printf("- Tong Xuan Nghia: Menu, Sap xep danh sach ten dua vao do tuoi cua tung nguoi\n- Huu Diep: Check password, Tim file dinh dang txt va doc noi dung file\n- Thanh Chung: Tinh tien dien dua vao so cong to cung cap, May tinh co ban");

    default:
        break;
    }

    }while(UserChoice!=0);
}

