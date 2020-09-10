#include<stdio.h>
int main(){
    int n;
    printf("enter how many line of increasing * patterns to be printed\n ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}