#include "vector_t.h"
#include <iostream>


template<typename T>
std::ostream & operator<<(std::ostream & os, const vector_t<T> & v)
{
	for (int i = 0; i < v.size; i++)
		os << v.entities[i] << " ";
	os << endl;
	return os;
}