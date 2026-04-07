//Đọc nội dung từ file đã ghi ở bài 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    f = fopen("ThangText.txt", "r");

    if(f==NULL)
    {
        printf("\n Loi tao hoac mo file");
        exit(1);
    }

    char noidung[100];
    fscanf(f, "%s", noidung);
    printf("\n Noi dung file la: %s", noidung);

    fclose(f);

    return 0;
}