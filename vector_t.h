#pragma once
#include<iostream>

template<typename T>
class vector_t {
public:
	friend 	std::ostream & operator<<(std::ostream & os, const vector_t<T>& v);
		
	vector_t() : size(0) {
		this->entities = nullptr;
	}

	vector_t(const int size_) : size(size_) {
		this->entities = new double[size];
		for (unsigned i = 0; i < this->size; i++)
			entities[i] = 1;
	}
private:
	unsigned size{ 0 };
	T* entities;
};

