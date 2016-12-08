#pragma once

#include <string>
#include <vector>
#include <iostream>

enum class ClassStandings {
	FRESHMAN,
	SOPHOMORE,
	JUNIOR, 
	SENIOR, 
	SUPER_SENIOR,
	SUPER_DE_DUPER_SENIOR,
	PLEASE_GRADUATE
};

class CallbackObj {
public:
	virtual ~CallbackObj() { std::cout << "C++ -> Callback::~Callback()" << std::endl; }
	virtual void run() { std::cout << "C++ -> Callback::run()" << std::endl; }
};

class BasicObject {
	int number;
public:
	BasicObject();
	//
	void sayHello();
	int multiply(int a, int b);
	std::string getBackFirstChar(const std::string& str);
	//
	void setNumber(int number);
	int getNumber() const;
	static int getNumberStatic(const BasicObject& obj);
	//
	int getSum(const std::vector<int>& nums);
	//
	void BeFancy(CallbackObj *callbackObj);
};