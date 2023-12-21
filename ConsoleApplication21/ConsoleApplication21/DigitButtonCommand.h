#pragma once
#include<iostream>
#include"Command.h"

// Команда для нажатия цифровой кнопки
class DigitButtonCommand : public Command
{
private:
	    int digit;
	public:
	    explicit DigitButtonCommand(int digit) : digit(digit) {}
	    void execute() override {
	        std::cout << "Нажата кнопка " << digit << std::endl;
	    }
	    void undo() override {
	        std::cout << "Отмена кнопки " << digit << std::endl;
	    }
};