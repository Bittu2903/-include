#include<stdio.h>
int main()
{
    int n , i ;
    scanf("%d",&n);
    for(i = 1 ; i <= n; i++){
        if(i%3 == 0 && i%5 ==0){
            printf("fizzbuzz");
        }
        else if (i%3 == 0)
        {
            printf("fizz");
        }
        else if (i%5 == 0)
        {
            printf("buzz");
        }
        else{
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}