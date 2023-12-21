#pragma once
#include<iostream>
#include"Command.h"

// Команда для нажатия кнопки сложения
class AddButtonCommand : public Command
{
public:
	    void execute() override {
	        std::cout << "Нажата кнопка сложения" << std::endl;
	    }
	    void undo() override {
	        std::cout << "Отмена кнопки сложения" << std::endl;
	    }
};