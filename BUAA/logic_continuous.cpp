Y欧尼 13:10:58
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int sum=3;
	vector<vector<int> > result;
	int tag =0;
    int small=1;
    int big=2;
    int middle=(1+sum)/2;
    int cursum=small+big;
    while(small<middle)//如果small>middle了得话，就不可能在就想家的100了。
    {
        if(cursum==sum)
        {
			result.push_back(vector<int>());
            for(int i=small;i<=big;i++)
            {
                //printf("%d",i);
				result[tag].push_back(i);
            }
			tag++;
			//printf("\n");
        }
        while(cursum>sum&&small<middle)//sum 
        {
            
            cursum-=small;
			small++;
			if(cursum==sum)
			{
				result.push_back(vector<int>());
				for(int i=small;i<=big;i++)
				{
					//printf("%d",i);
					result[tag].push_back(i);
				}
				//printf("\n");
				tag++;
			}
        }
        big++;
        cursum+=big;            
    }
	//return result;
    return 0;  
}
