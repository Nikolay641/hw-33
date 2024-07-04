#pragma once
#include <iostream>
#include <string>
#include <exception>
using std::cout;
using std::endl;
using std::string;
using std::exception;

class ZooException : public exception {
public:
	ZooException() : exception("") {}
	virtual char const* what() const = 0;
};

class NameException : public ZooException {
public:
	char const* what()const override {
		return "Name is empty\n";
	}
};

class PredatorException : public ZooException {
public:
	char const* what()const override {
		return "You can't add predator to an enclosure with non-predators!\n";
	}
};

class MaxCapacityException : public ZooException {
public:
	char const* what()const override {
		return "You can't add more animals than the max capacity of the enclosure!\n";
	}
};