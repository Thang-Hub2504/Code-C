//Viết thêm nội dung vào file đã tạo ở Bài tập 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    f = fopen("ThangText.txt", "a");

    if(f==NULL)
    {
        printf("\n Loi tao hoac mo file");
        exit(1);
    }

    char noidung[100];
    printf("\n Nhao vao noi dung ban muon them: ");
    fflush(stdin);
    fgets(noidung, sizeof(noidung), stdin);

    fprintf(f, "%s", noidung);

    fclose(f);

    return 0;
}