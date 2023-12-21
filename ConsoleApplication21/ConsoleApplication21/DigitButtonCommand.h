#pragma once
#include<iostream>
#include"Command.h"

// ������� ��� ������� �������� ������
class DigitButtonCommand : public Command
{
private:
	    int digit;
	public:
	    explicit DigitButtonCommand(int digit) : digit(digit) {}
	    void execute() override {
	        std::cout << "������ ������ " << digit << std::endl;
	    }
	    void undo() override {
	        std::cout << "������ ������ " << digit << std::endl;
	    }
};