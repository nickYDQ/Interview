#include<string>
#include<iostream>
using namespace std;

void toLowerCase(string& str)
{
	for (int i = 0; i < str.length(); ++i)
		str[i] = tolower(str[i]);

}

int main()
{
	string s1;//待删除字符串
	cin >> s1;
	//cin.get();
	string s2;
	cin.ignore();
	getline(cin, s2);
	//cin>>s2;
	/*int i;
	//cin.ignore();
	getchar();
	while(getline(cin,s2))
	{
	cout<<s2<<endl;
	}*/
	//s2 -> abcsdab
	//s1 -> ab
	//int size = strlen(s1.c_str());
	//In
	//IninINiN  asda  sdiinn
	toLowerCase(s1);
	string s = s2;
	toLowerCase(s);
	int size = s1.size();
	int tag = -size;//找到s1的位子
	int n = 0;
	while (s.find(s1, tag + size) != string::npos)
	{
		tag = s.find(s1, tag + size);//s 
		s2.erase(tag - n*size, size);//
		n++;
	}

	//size = 1;
	//tag = -size;//重新从头开始找
	//n = 0;//初始化n = 0
	//while (s.find(" ", tag + size) != string::npos)
	//{
	//	tag = s.find(" ", tag + size);//s 
	//	s2.erase(tag - n*size, size);//
	//	n++;
	//}

	while (s2.find(" ") != string::npos)
	{
		tag = s2.find(" ");
		s2.erase(tag, 1);
	}
	cout << s2 << endl;

	return 0;
}