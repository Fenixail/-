#pragma once
#include<iostream>

// Общий интерфейс для всех команд
class Command
{
public:
	  virtual ~Command() = default;
	  virtual void execute() = 0;
	  virtual void undo() = 0;
};

