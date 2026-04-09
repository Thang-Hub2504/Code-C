#include<stdio.h>

int linearsearch(int a[], int n, int x);

int main()
{
    int a[10], x, n;
    printf("nhap so phan tu mang a: ");
    scanf("%d",&n);

    for(int i=0;i<n ;i++)
    {   
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    printf("mang vua nhap la: ");

    for(int i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }

    printf("\nNhap x de tim: ");
    scanf("%d", &x);

    int result = linearsearch(a,n,x);
        if (result != -1) 
        {
            printf("\nTim thay x tai vi tri: %d\n", result);
        } 
        else 
        {
            printf("\nKhong tim thay x trong mang.\n");
        }

    return 0;
}

int linearsearch(int a[], int n, int x)
{
    int i=0;
    while((i<n) && (a[i]!=x)) i++;
    if(i==n)
    return -1;
    else
    return i;
}