vector<int> result;
int N=matrix.size();//hang
int M=matrix[0].size();
int start=0;
while(N>start*2&&M>start*2)
{

    int endx=N-1-start;
    int endy=M-1-start;
    //shang
    for(int i=start;i<=endy;i++)
    {
        result.push_back(matrix[start][i]);
        //printf("%d",matrix1[start][i]);
    }
    //you
    if(endy>=start)
    {
        for(int i=start+1;i<=endx;i++)
        {
            result.push_back(matrix[i][endy]);
            //printf("%d",matrix1[i][endy]);
        }
    }
    //下
    if(endx>start && endy-start>=1)
    {
        for(int i=endy-1;i>=start;i--)
        {
            result.push_back(matrix[endx][i]);
            //printf("%d",matrix1[endx][i]);
        }
    }
    //zuo
    if(endx-start>=2 && endy>start)
    {
        for(int i=endx-1;i>start;i--)
        {
            result.push_back(matrix[i][start]);
            //printf("%d",matrix1[i][start]);
        }
    }


    start++;
}
return result;

// /*
// 1 2 3 4 
// 6 7 8 9 
// 1 5 3 2 
// */
// #include<stdio.h>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> result;
//     int matrix1[9][9];
//     int N=3;//hang
//     int M=4;
//     for(int i=0;i<N;i++)
//     {
//         for(int j=0;j<M;j++)
//         {
//             scanf("%d",&matrix1[i][j]);
//         }
//     }
//     int start=0;
//     while(N>start*2&&M>start*2)
//     {
        
//         int endx=N-1-start;
//         int endy=M-1-start;
//         //shang
//         for(int i=start;i<=endy;i++)
//         {
//             result.push_back(matrix1[start][i]);
//             //printf("%d",matrix1[start][i]);
//         }
//         //you
//         if(endy>=start)
//         {
//             for(int i=start+1;i<endx+1;i++)
//             {
//                 result.push_back(matrix1[i][endy]);
//                 //printf("%d",matrix1[i][endy]);
//             }
//         }
//         //下
//         if(endx>start && endy-start>=1)
//         {
//             for(int i=endy-1;i>=start;i--)
//             {
//                 result.push_back(matrix1[endx][i]);
//                 //printf("%d",matrix1[endx][i]);
//             }
//         }
//         //zuo
//         if(endx-start>=2 && endy>start)
//         {
//             for(int i=endx-1;i>start;i--)
//             {
//                 result.push_back(matrix1[i][start]);
//                 //printf("%d",matrix1[i][start]);
//             }
//         }
        

//         start++;
//     }
//     for(int k = 0;k<result.size();k++)
//     {
//         printf("%d ",result[k]);
//     }
//     return 0;
// }
