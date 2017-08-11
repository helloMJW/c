#include<stdio.h>
/**
 *解决分鱼问题 来源于: http://c.biancheng.net/cpp/html/3378.html
 */
int fish(int n, int x)
{
    if((x-1)%5 == 0)
    {
        if(n == 1)
            return 1;
        else
            return fish(n-1, (x-1)/5*4);
    }
    return 0;
}

int main()
{
    int i=0, flag=0, x;
    do
    {
        i=i+1; 
        x=i*5+1;
        if(fish(5, x))
        {
            flag=1;
            printf("五个人合伙捕到的鱼总数为%d\n", x);
        }
    }
    while(!flag);
    return 0;
}
