#include<stdio.h>
#include <ctype.h>
#include"main.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

struct Person
{
    char Name[20];
    int Age;
};

int Nghia_1()
{
    bool Re_Run;

    do
    {
        struct Person InputList[50];
        struct Person SortedList[50];
        char NameInput[20];
        int AgeInput,UserChoice,CompareNumber=INT_MAX,loc;
        size_t PersonCounter;
        int YNRe_run;


        do
        {
            printf("Vui long cho biet so nguoi ban dinh nhap vao(toi da 50 nguoi): ");
            scanf("%d",&PersonCounter);
            if(PersonCounter > 50)
            {
                printf("Vui long khong nhap so lon hon 50");
            }
        }
        while(PersonCounter > 50);


        printf("==================== Chon cach sap xep ====================\n");
        do
        {
            printf("1. Tu it tuoi nhat toi lon tuoi nhat.\n2. Tu lon tuoi nhat toi it tuoi nhat.\n0. Dung chuong trinh. \nVui long nhap lua chon: ");
            scanf("%d",&UserChoice);
            getchar();
        }
        while(UserChoice!=1 && UserChoice!=2 && UserChoice!=0);


        printf("==================== Nhap danh sach ====================\n");
        for(int i=0; i<PersonCounter; i++)
        {
            printf("Nhap ten cho nguoi thu %d: ",i+1);
            fgets(NameInput,sizeof(NameInput),stdin);
            NameInput[strcspn(NameInput,"\n")]=0;
            printf("Nhap tuoi cho nguoi thu %d: ",i+1);
            scanf("%d",&AgeInput);
            getchar();

            strcpy(InputList[i].Name,NameInput);
            InputList[i].Age=AgeInput;
        }



        switch(UserChoice)
        {
        case 1:
            for(int i=0; i<PersonCounter; i++)
            {
                for(int y=0; y<PersonCounter; y++)
                {
                    if(CompareNumber>InputList[y].Age)
                    {
                        CompareNumber=InputList[y].Age;
                        loc=y;
                    }
                }
                SortedList[i].Age =CompareNumber;
                strcpy(SortedList[i].Name,InputList[loc].Name);
                InputList[loc].Age=CompareNumber=INT_MAX;
            }
            break;


        case 2:
            CompareNumber=INT_MIN;
            for(int i=0; i<PersonCounter; i++)
            {
                for(int y=0; y<PersonCounter; y++)
                {
                    if(CompareNumber<InputList[y].Age)
                    {
                        CompareNumber=InputList[y].Age;
                        loc=y;
                    }
                }
                SortedList[i].Age =CompareNumber;
                strcpy(SortedList[i].Name,InputList[loc].Name);
                InputList[loc].Age=CompareNumber=INT_MIN;
            }
            break;


        case 0:
            return 0;


        default:
            break;
        }


        printf("======================================================\n");
        if(UserChoice==1)
        {
            printf("Danh sach tu gia nhat den tre nhat la: \n");
            for(int i=0; i<PersonCounter; i++)
            {
                printf("Ten: %s,tuoi: %d\n",SortedList[i].Name,SortedList[i].Age);
            }
        }
        else if(UserChoice==2)
        {
            printf("Danh sach tu tre nhat den gia nhat la: \n");
            for(int i=0; i<PersonCounter; i++)
            {
                printf("STT: %d | Ten: %s | tuoi: %d\n",i+1,SortedList[i].Name,SortedList[i].Age);
            }
        }


            printf("Ban co muon tiep tuc khong(1 de tiep tuc va 2 de dung chuong trinh)?: ");
            scanf("%d",YNRe_run);


            if(YNRe_run==1)
            {
                Re_Run=1;
            }
            else
            {
                Re_Run=0;
            }
    }
    while(Re_Run==1);
}

int Diep_1()
{
    char password[20];

    while (1) {
        printf("Nhap mat khau: ");
        scanf("%s", password);

        if (strcmp(password, "123456") == 0) {
            printf("Dang nhap thanh cong.\n");
            break;
        }
        printf("Sai mat khau, thu lai!\n");
    }

    return 0;
}

int Diep_2()
{
    FILE *file;
    char content[200];

    file = fopen("sample.txt", "w");
    if (!file) return 1;
    fprintf(file, "Xin chao!\nDay la file van ban.\nHoc lap trinh C.\n");
    fclose(file);

    file = fopen("sample.txt", "r");
    if (!file) return 1;
    while (fgets(content, sizeof(content), file)) {
    printf("Noi dung cua file sample.txt: \n");
        printf("%s", content);
    }
    fclose(file);

    return 0;
}

float tinhtiendien(float sodien) {
    float giadien = 3.800f;
    float tongtiendien = sodien * giadien;

    printf("--Hoa don tien dien--\n");
    printf("So dien tieu thu trong 1 thang: %.2f\n", sodien);
    printf("Tong tien dien 1 thang: %.2f VND\n", tongtiendien);
    return tongtiendien;
}

void maytinh() {
    float so1, so2, tinhtoan;
    int pheptinh;
    printf("Chon phep tinh:\n 1.+\n 2. -\n 3. *\n 4. / \nNhap lua chon di : ");
    scanf("%d", &pheptinh);
    printf("Nhap so1: ");
    scanf("%f", &so1);
    printf("nhap so2: ");
    scanf("%f", &so2);

    switch (pheptinh) {
        case 1:
            tinhtoan = so1 + so2;
            printf("Ket qua: %.2f\n", tinhtoan);
            break;
        case 2:
            tinhtoan = so1 - so2;
            printf("Ket qua: %.2f\n", tinhtoan);
            break;
        case 3:
            tinhtoan = so1 * so2;
            printf("Ket qua: %.2f\n", tinhtoan);
            break;
        case 4:
            if (so2 != 0) {
                tinhtoan = so1 / so2;
                printf("Ket qua: %.2f\n", tinhtoan);
            } else {
                printf("Khong the chia cho 0!!\n");
            }
            break;
        default:
            printf("Lua chon vo ly!!\n");
            break;
    }
}
