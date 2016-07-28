//2016.6.8
#include<stdio.h>
/*int turn90(int n,int matrix1[9][9],int matrix2[9][9] )
{
	int i,j;
    for(i=0;i<n/2;i++)
    {
        for(j=i;j<=n-i-1;j++)
        {
            int temp=matrix1[i][j];
            matrix1[i][j]=matrix1[n-j-1][i];
            matrix1[n-j-1][i]=matrix1[n-i-1][n-j-1];
            matrix1[n-i-1][n-j-1]=matrix1[j][n-1-1];
            matrix1[j][n-i-1]=temp;
            
        }
    }
    return matrix1;
}*/

int turn0(int n,int matrix1[10][10],int matrix2[10][10])
{
    int i,j;
    int flag=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix1[i][j]!=matrix2[i][j])
            {
             	flag=0;   
            }
        }
    }
    return flag;
}
int turn90(int n,int matrix1[10][10],int matrix2[10][10])
{
    int i,j;
    int flag=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix1[i][j]!=matrix2[j][n-i-1])
            {
             	flag=0;   
            }
        }
    }
    return flag;
}
int turn180(int n,int matrix1[10][10],int matrix2[10][10])
{
    int i,j;
    int flag=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix1[i][j]!=matrix2[n-i-1][n-j-1])
            {
             	flag=0;   
            }
        }
    }
    return flag;
}
int turn270(int n,int matrix1[10][10],int matrix2[10][10])
{
    int i,j;
    int flag=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix1[i][j]!=matrix2[n-j-1][i])
            {
             	flag=0;   
            }
        }
    }
    return flag;
}
int main()
{
 	int n;
    int matrix1[10][10];
    int matrix2[10][10];
    while(scanf("%d",&n)!=EOF)
    {
		int i,j;
        int flag=1;
 		for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
        		scanf("%d",&matrix1[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
        		scanf("%d",&matrix2[i][j]);
            }
		}
/*
3
1 2 3
4 5 6
7 8 9
7 4 1
8 5 2
9 6 3

3
1 2 3
4 5 6
7 8 9
3 6 9
2 5 8
1 4 7

3
1 2 3
4 5 6
7 8 9
9 8 7
6 5 4
3 2 1
*/
        if(turn0(n,matrix1,matrix2)==flag)
        {
            printf("0\n");
        	continue;
        }
        if(turn90(n,matrix1,matrix2)==flag)
        {
            printf("90\n");
        	continue;
        }
        if(turn180(n,matrix1,matrix2)==flag)
        {
            printf("180\n");
        	continue;
        }
        if(turn270(n,matrix1,matrix2)==flag)
        {
            printf("270\n");
        	continue;
        }
		else
		{
			printf("-1"\n);
		}
    }
    return 0;
}

