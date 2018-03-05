#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>
#include <math.h>

class IReceiver
{
public:
	IReceiver(int val) : m_val(val) {};
	void Increment() {
		m_val++;
		std::cout << "Increment m_val == " << m_val << std::endl;
	}
	void Decrement() {
		m_val--;
		std::cout << "Decrement m_val == " << m_val << std::endl;
	}
	void Square() 
	{
		m_val *= m_val;
		std::cout << "Sqrt m_val == " << m_val << std::endl;
	}
	void Sqrt() 
	{
		m_val = sqrt(m_val);
		std::cout << "Square m_val == " << m_val << std::endl;
	}

private:
	int m_val;
};

#endif