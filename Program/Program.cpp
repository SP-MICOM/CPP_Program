#include "stdafx.h"
#include <unordered_set>
#include <unordered_map>

int main()
{
#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

#pragma region unordered_set

	// unordered_set<const char*> unordered_set;
	// 
	// unordered_set.reserve(16);
	// 
	// unordered_set.max_load_factor(2.0f);
	// 
	// unordered_set.insert("Bread");
	// unordered_set.insert("Sword");
	// unordered_set.insert("Shield");
	// unordered_set.insert("Wand");
	// unordered_set.insert("Bow");
	// unordered_set.insert("Potion");
	// unordered_set.insert("Gold");
	// 
	// // unordered_set.insert("Dragon egg");
	// // unordered_set.insert("Item1");
	// 
	// cout << "Load Factor : " << unordered_set.load_factor() << endl;
	// cout << "Bucket Count : " << unordered_set.bucket_count() << endl;
	// 
	// if (unordered_set.find("Shield") != unordered_set.end())
	// {
	// 	cout << "the data exists..." << endl;
	// }
	// else
	// {
	// 	cout << "the data does not exist..." << endl;
	// }
	// 
	// unordered_set.erase("Bow");
	// 
	// for (const char* element : unordered_set)
	// {
	// 	cout << element << endl;
	// }

#pragma endregion

#pragma region unordered map

	unordered_map<std::string, int> unordered_map;

	unordered_map["Potion"] = 2;
	unordered_map["Bread"] = 1;
	unordered_map["Gem"] = 2;
	unordered_map["Oil"] = 3;

	string name;

	cin >> name;
	
	if (unordered_map[name] > 0 && unordered_map.find(name) != unordered_map.end())
	{
		unordered_map[name]--;
		
		cout << name << " use." << endl;

		if (unordered_map[name] == 0)
		{
			unordered_map.erase(name);

			cout << "All the " << name << " has been used." << endl;
		}
	}
	else
	{
		cout << "Doesn't Exist." << endl;
	}

	for (const auto& element : unordered_map)
	{
		cout << "Name : " << element.first << " - Quantity : " << element.second << endl;
	}

#pragma endregion


#pragma endregion


	return 0;
}