#include "SWIGDemo.h"

#include <iostream>

BasicObject::BasicObject() {
	this->number = -1;
}

void BasicObject::sayHello() {
	std::cout << "Hello, world! (in the C++)" << std::endl;
}

int BasicObject::multiply(int a, int b) {
	return a * b;
}

std::string BasicObject::getBackFirstChar(const std::string& str) {
	if (str.length() > 0)
		return str.substr(0, 1);
	return "";
}

void BasicObject::setNumber(int number) {
	this->number = number;
}

int BasicObject::getNumber() const {
	return this->number;
}

int BasicObject::getNumberStatic(const BasicObject& obj) {
	return obj.getNumber();
}

int BasicObject::getSum(const std::vector<int>& nums) {
	int sum = 0;
	for (int i : nums)
		sum += i;
	return sum;
}