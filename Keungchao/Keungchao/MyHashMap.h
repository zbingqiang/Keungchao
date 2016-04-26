#pragma once

#include<iostream>
#include<hash_map>
using namespace std;

void funHashMap()
{ 
	hash_map<int, int> myHashMap = { {10, 20} };
	myHashMap[9] = 20;
	for (auto v : myHashMap)
		cout << v.first << " "<<v.second << endl;
}