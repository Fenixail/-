#pragma once
#include"Command.h"
//������� ��� ������� ������ ���������
class MultiplyButtonCommand : public Command
{
public:
    void execute() override {
        std::cout << "������ ������ ���������" << std::endl;
    }
    void undo() override {
        std::cout << "������ ������ ���������" << std::endl;
    }
};

