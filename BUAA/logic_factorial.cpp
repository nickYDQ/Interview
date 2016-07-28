#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
	{

		long long result_odd = 0;
		for(int i = 1;i<=n;i+=2)
		{
			long long result = 1;
			for (int j = 1; j <= i; ++j)
			{
				result = result*j;
			}
			result_odd+=result;
			
		}

		long long result_even = 0;
		for(int i = 2;i<=n;i+=2)
		{
			long long result = 1;
			for (int j = 1; j <= i; ++j)
			{
				result = result*j;
			}
			result_even+=result;
			
		}
		cout<<result_odd<<" "<<result_even<<endl;
    }

    return 0;
}

// #include<stdio.h>
// int jiecheng(int n)
// {
//     int i;
//     int j;
//     int y2=0;//存阶乘数
//     if(0==n%2)
//     {   
//         for(i=2;i<=n;i+=2)//偶数阶乘数
//         {
// 			int ptsum=1;
//             for(j=1;j<=i;j++)//1*2 3*4 // 
//             {
//                 ptsum=j*ptsum;
//             }
// 			y2=ptsum+y2;
//         }
        
//     }
//     else
//     {
//          for(i=1;i<=n;i+=2)//奇数阶乘数
//         {
// 			int ptsum=1;
//             for(j=1;j<=i;j++)//i=3 
//             {
//                 ptsum=j*ptsum;
//             }
// 			y2=ptsum+y2;
//         }
        
//     }
//     return y2;
// }
// int main()
// {
//     int n;
//     int y1;
//     while(scanf("%d",&n)!=EOF)
//     {
// 		int tsum=0;
// 		int y2=jiecheng(n);
// 		for(int i=1;i<=n;i++)	
// 		{
// 			int zsum=1;
// 			for(int j=1;j<=i;j++)
// 			{
// 				zsum=j*zsum;                    
// 			}
// 			tsum=zsum+tsum;//总的阶乘数
// 		}	
// 		y1=tsum-y2;
// 		if(0==n%2)
// 		{          
// 			printf("%d %d",y1,y2);
// 		}
// 		else
// 		{
// 			printf("%d %d",y2,y1);
// 		}
// 		printf("\n");
// 	}
//     return 0;     
// }