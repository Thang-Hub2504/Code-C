#include<stdio.h>

int binarysearch(int a[], int n, int x);

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

    int result = binarysearch(a,n,x);
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

int binarysearch(int a[], int n, int x)
{
    int left =0;
    int right = n-1;
    int middle;
    do
    {
        middle =(left+right)/2;
        if(x==a[middle])
                return middle;
            else
                if(x <a[middle])
                    right = middle -1;
                else 
                left = middle +1;
    }while(left<=right);
    return -1;
}