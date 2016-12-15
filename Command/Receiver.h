#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>

class IReceiver
{
public:
	void MouseAction() {std::cout << "mouse action" << std::endl;}
	void KeyAction() {std::cout << "key action" << std::endl;}
};

#endif