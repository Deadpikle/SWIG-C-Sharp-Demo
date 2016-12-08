#pragma once

#include <string>
#include <vector>

class BasicObject {
	int number;
public:
	BasicObject();

	void sayHello();
	int multiply(int a, int b);
	std::string getBackFirstChar(const std::string& str);

	void setNumber(int number);
	int getNumber() const;
	static int getNumberStatic(const BasicObject& obj);

	int getSum(const std::vector<int>& nums);
};