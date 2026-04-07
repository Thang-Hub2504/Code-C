//Tạo file, mở file và ghi nội dung

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    f = fopen("ThangText.txt", "w");

    if(f==NULL)
    {
        printf("\n Loi tao hoac mo file");
        exit(1);
    }

    char noidung[100];
    printf("\n Nhap vao noi dung: ");
    fflush(stdin);
    fgets(noidung, sizeof(noidung), stdin);
    
    fprintf(f, "%s", noidung);

    fclose(f);

    return 0;
}