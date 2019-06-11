#include <stdio.h>

int main()
{
    
    
    unsigned long long int n,sum=0,rem;
    scanf("%llu",&n);
    while(n>0)
    {
        rem=n%10;
        sum+=rem*rem;
        n/=10;
    }
    printf("%llu",sum);
       
    
    
}
