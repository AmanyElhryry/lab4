#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num , x , sum=0;
    printf("Enter number ");
    scanf("%d",&num);
    while(num!=0){
        x=num%10;
    sum+=x;
    num=num/10;
    }
    printf("sum of digit= %d",sum);
    return 0;
}
