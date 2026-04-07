#include<stdio.h>
#include<string.h>
#define N 256
int main()
{
    char nd[1000];
    int freq[N]={0};
        fflush(stdin);
        fgets(nd, sizeof(nd), stdin);

        int len =strlen(nd);
        for(int i=0;i<len;i++)
        {
            if(nd[i] != '\n')
            {
            freq[(unsigned char)nd[i]]++;
            }
        }

    printf("\nKy tu | So lan xuat hien\n");
    printf("------+------------------\n");

    for (int i = 0; i < N; i++) {
        if (freq[i] > 0) {
            if (i == ' ')
                printf("  ' ' | %d\n", freq[i]);
            else
                printf("  '%c' | %d\n", i, freq[i]);
        }
    }

    return 0;
}