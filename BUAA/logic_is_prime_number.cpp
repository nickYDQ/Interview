#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        
     	if(n<=11||n>10000)//注意当为11的时候也是输出-1
        {
			printf("-1");
            continue;
        }
		printf("11");
        for(int i=11;i<n;i+=10)
        {
            int flag=1;
            for(int j=2;j<i;j++)
            {
                if(0==i%j)
                {
                    flag=0;                 
                }
            }
            if(flag==1&&i!=11)//由于前面已经出了11，所以这里需要做判断
        	{
        		printf(" %d",i);   
        	}
        }
       printf("\n"); 
    }
    return 0;
}
