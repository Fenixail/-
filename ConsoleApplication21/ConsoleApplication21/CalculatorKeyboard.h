#pragma once
#include<vector>
#include<iostream>
#include"Command.h"
//  ласс, представл€ющий клавиатуру калькул€тора
class CalculatorKeyboard
{
private:
	    std::vector<Command*> buttons;
	public:
	    void addButton(Command* command) {
	        buttons.push_back(command);
	    }
	
	    void pressButton(int index) {
	        if (index >= 0 && index < buttons.size()) {
	            buttons[index]->execute();
	        }
	    }
	
	    void undoButton(int index) {
	        if (index >= 0 && index < buttons.size()) {
	            buttons[index]->undo();
	        }
	    }
};

