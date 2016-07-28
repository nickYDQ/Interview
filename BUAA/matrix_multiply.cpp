//原始未修改代码
#include<stdio.h>
int matrix_multiply(int array1[1000][1000], int array2[1000][1000], int array3[1000][1000], int x, int y, int z)
{
	for (int i = 0; i<x; i++)
	{
		for (int m = 0; m<z; m++)
		{
			array3[i][m] = 0;
			for (int j = 0; j<y; j++)
			{
				array3[i][m] = array1[i][j] * array2[j][m] + array3[i][m];
			}
		}
	}
	return array3;
}
int main()
{
	int array1[1000][1000];
	int array2[1000][1000];
	int array3[1000][1000];
	int x;//A矩阵的行数
	int y;//列数
	int z;//B的列数
	scanf("%d %d %d", &x, &y, &z);
	for (int i = 0; i<x; i++)
	{
		for (int j = 0; j<y; j++)
		{
			scanf("%d", array1[i][j]);
		}
	}
	for (i = 0; i<y; i++)//int i = 0;
	{
		for (int m = 0; m<z; m++)
		{
			scanf("%d", array2[i][m]);
		}
	}
	array3 = matrix_multiply(array1, array2, array3, x, y, z);//其实不用返回 直接在函数中打印就行了
	return 0;
}

//AC代码一，不使用array3返回
#include<stdio.h>
void matrix_multiply(int array1[100][100], int array2[100][100],  int x, int y, int z)//其实不用返回，直接计算完就打印即可
{
	for (int i = 0; i<x; i++)
	{
		for (int m = 0; m<z; m++)
		{
			int t = 0;
			int j = 0;
			for (; j<y; j++)
			{
				t +=(array1[i][j] * array2[j][m]);

			}
			if (m == z-1 )//输出符合换行空格规则
			{
				printf("%d\n",t);
			}
			else{
				printf("%d ",t);
			}
		}
	}
}
int main()
{
	int array1[100][100];//1000太大了，会超内存
	int array2[100][100];
	//int array3[1000][1000];
	int x;//A矩阵的行数
	int y;//列数
	int z;//B的列数
	while(scanf("%d %d %d", &x, &y, &z)!=EOF){//要处理多组测试用例
        for (int i = 0; i<x; i++)
        {
            for (int j = 0; j<y; j++)
            {
                scanf("%d", &array1[i][j]);//要加上地址符
            }
        }
        for (int i = 0; i<y; i++)
        {	
            for (int m = 0; m<z; m++)
            {
                scanf("%d", &array2[i][m]);//要加上地址符
            }
        }
        matrix_multiply(array1, array2, x, y, z);//其实不用返回 直接在函数中打印就行了
    }

	return 0;
}

//AC代码二，使用array3
#include<stdio.h>
void matrix_multiply(int array1[100][100], int array2[100][100], int array3[100][100], int x, int y, int z)
{
	for (int i = 0; i<x; i++)
	{
		for (int m = 0; m<z; m++)
		{
			int t = 0;
			array3[i][m] = 0;
			for (int j = 0; j<y; j++)
			{
				array3[i][m] += (array1[i][j] * array2[j][m]);

			}
		}
	}
}
int main()
{
	int array1[100][100];//1000太大了，会超内存
	int array2[100][100];
	int array3[100][100];
	int x;//A矩阵的行数
	int y;//列数
	int z;//B的列数
	while (scanf("%d %d %d", &x, &y, &z) != EOF){//处理多组用例
		for (int i = 0; i<x; i++)
		{
			for (int j = 0; j<y; j++)
			{
				scanf("%d", &array1[i][j]);//要加上地址符
			}
		}
		for (int i = 0; i<y; i++)
		{
			for (int m = 0; m<z; m++)
			{
				scanf("%d", &array2[i][m]);//要加上地址符
			}
		}
		matrix_multiply(array1, array2, array3, x, y, z);//如果使用array3直接做数组参数即可，等于传递的是指针，函数返回后内容已被修改
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < z; j++)
			{
				if (j == z - 1)
				{
					printf("%d\n", array3[i][j]);
				}
				else{
					printf("%d ", array3[i][j]);
				}
			}

		}
	}
	
	return 0;
}