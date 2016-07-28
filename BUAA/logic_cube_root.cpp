#include<stdio.h>
int main()
{	int x,n;
 	
 	while(scanf("%d %d",&x,&n)!=EOF)
    {
        if(x==0)
    	{
        	continue;
    	}
        double y=x;
        for(int i=0;i<n;i++)
        {
            y=(y*2)/3+x/(3*y*y);
        }
        printf("%0.6lf\n",y);
    }
    return 0;
}