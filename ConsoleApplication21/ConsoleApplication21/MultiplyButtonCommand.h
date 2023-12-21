#pragma once
#include"Command.h"
//Команда для нажатия кнопки умножения
class MultiplyButtonCommand : public Command
{
public:
    void execute() override {
        std::cout << "Нажата кнопка умножения" << std::endl;
    }
    void undo() override {
        std::cout << "Отмена кнопки умножения" << std::endl;
    }
};

