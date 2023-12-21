#include <iostream>
#include <vector>
#include <string>
#include "Command.h"
#include "AddButtonCommand.h"
#include"CalculatorKeyboard.h"
#include"DigitButtonCommand.h"
#include"MultiplyButtonCommand.h"



int main() {
    setlocale(LC_ALL, "rus");
    // Создание объекта калькулятора
    CalculatorKeyboard calculator;
    
    // Добавление кнопок на клавиатуру
    calculator.addButton(new DigitButtonCommand(1));
    calculator.addButton(new DigitButtonCommand(2));
    calculator.addButton(new DigitButtonCommand(3));
    calculator.addButton(new AddButtonCommand());
    calculator.addButton(new MultiplyButtonCommand());

    // Нажатие и отмена нажатия кнопок
    calculator.pressButton(0);  // Нажата кнопка 1
    calculator.pressButton(3);  // Нажата кнопка сложения
    calculator.undoButton(3);   // Отмена кнопки сложения
    calculator.pressButton(4);  // Нажата кнопка умножения
    calculator.undoButton(0);   // Отмена кнопки 1

    return 0;
}