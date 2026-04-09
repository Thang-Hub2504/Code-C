#include<stdio.h>
#include<string.h>

int main()
{
    char nd[1000];
    int so[256]={0};

    printf("Nhap chuoi: ");
    if(fgets(nd, sizeof(nd), stdin))
    {
        nd[strcspn(nd, "\n")] = '\0';
        for (int i = 0; nd[i] != '\0'; i++)
        {
            so[(unsigned char)nd[i]]++;
        }


        for (int i = 0; i < 256; i++)
        {
            if (so[i] > 0)
            {
                if (i == ' ')
                printf("  ' ' | %d\n", so[i]);
            else
                printf("  '%c' | %d\n", i, so[i]);
            }
        }
    }   return 0;
}