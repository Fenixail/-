#pragma once
#include<iostream>
#include"Command.h"

// ������� ��� ������� ������ ��������
class AddButtonCommand : public Command
{
public:
	    void execute() override {
	        std::cout << "������ ������ ��������" << std::endl;
	    }
	    void undo() override {
	        std::cout << "������ ������ ��������" << std::endl;
	    }
};