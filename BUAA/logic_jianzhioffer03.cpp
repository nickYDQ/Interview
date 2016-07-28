#include <vector>
#include <iostream>
using namespace std;
bool Find(vector<vector<int> > array, int target) {
	int i_max = array.size()-1;//行的长度
	int j_max = array[0].size()-1;//列的长度
	bool flag = false;
	int i = 0;
	int j = j_max;
	//i_max = 3;
	while(i!=i_max && j!=0)
	{
		if(target<array[i][j]&&j!=0)
		{
			
			j--;
		}
		if(target>array[i][j]&&i!=i_max)
		{
			i++;
		}
		if (target == array[i][j])
		{
			flag = true;
			break;
		}

	}
	//cout<<flag<<endl;
	return flag;
}

void main()
{
	vector<vector<int> > array;
	//= { { 1, 2, 8, 9 }, { 2, 4, 9, 12 }, { 4, 7, 10, 13 }, { 6, 8, 11, 15 } };
	array.push_back(vector<int>());
	array.push_back(vector<int>());
	array.push_back(vector<int>());
	array.push_back(vector<int>());
	array[0].push_back(1);
	array[0].push_back(2);
	array[0].push_back(8);
	array[0].push_back(9);

	array[1].push_back(2);
	array[1].push_back(4);
	array[1].push_back(9);
	array[1].push_back(12);

	array[2].push_back(4);
	array[2].push_back(7);
	array[2].push_back(10);
	array[2].push_back(13);

	array[3].push_back(6);
	array[3].push_back(8);
	array[3].push_back(11);
	array[3].push_back(15);
	Find(array, 15);
}
