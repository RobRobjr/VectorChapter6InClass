#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void print(vector<string> list);

int main()
{
	vector<string> list;
	print(list);
	list.push_back("eggs");
	list.push_back("milk");
	list.push_back("sugar");
	list.push_back("chocolate");
	list.push_back("flour");
	print(list);
	list.push_back("coffee");
	print(list);
	//Looks for sugar and replaces it with honey
	for (size_t i = 0; i < list.size(); ++i)
	{
		if (list[i] == "sugar")
		{
			list[i] = "honey";
		}
	}
	print(list);
	//Removes milk from the list
	for (size_t i = 0; i < list.size(); ++i)
	{
		if (list[i] == "milk")
		{
			list.erase(list.begin() + i);
			--i;//This is here to remove all other references of milk
		}
	}
	print(list);

	system("pause");
	return 0;
}

void print(vector<string> list)
{
	for (size_t i = 0; i < list.size(); ++i)
	{
		cout << list[i] << endl;
	}
	cout << endl;
}