#include<stdio.h>
int main()
{
    int array1[5] = {10,20,30,40,50};
    int array2[5];
    printf("Array 1 value : \n");
    for(int i = 0 ; i<5 ; i++)
    {
        printf("%d  ",array1[i]);
    }
    printf("\n");
    printf("Array 2 value : \n");
    for(int j = 0; j<5 ;j++)
    {
        array2[j] = array1[j];
        printf("%d  ",array2[j]);
    }

    getch();
}
