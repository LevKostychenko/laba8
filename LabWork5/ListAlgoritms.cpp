#pragma once
#include "pch.h"
#include "List.cpp"

template<typename T>
class ListAlgoritms
{
public:
	static void Sort(List<T> list);
};

template<typename T>
void ListAlgoritms<T>::Sort(List<T> list)
{
	auto start = list.begin();
	auto end = list.end();
	for (start; start != end; ++start)
	{
		auto iter2 = start;
		iter2++;
		auto end2 = list.end();
		for (iter2; iter2 != end2; ++iter2)
		{
			if (*iter2 < *start)
			{
				T buf = *iter2;
				*iter2 = *start;
				*start = buf;
			}
		}
	}
}
