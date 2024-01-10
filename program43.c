#include<stdio.h> //for printf and scanf
#include<stdlib.h> //for malloc and free

void Display(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;

    printf("Enter number of elements: \n");
    scanf("%d",&iCount);

    ptr =(int *)malloc(iCount*sizeof(int));

    printf("Enter the elements\n");

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);
    free(ptr);
    return 0;

}