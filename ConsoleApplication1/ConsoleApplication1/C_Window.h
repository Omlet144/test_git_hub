#pragma once
#include<ostream>

class C_Window
{
protected:
	double size;
	char wind;
public:
	C_Window()
	{
		this->size = 0.0;
		this->wind = 'C';
	}
	C_Window(double size)
	{
		this->size = size;
		this->wind = wind;
	}
	friend std::ostream& operator << (std::ostream& out, const C_Window& window) {
		out << "size of Window " << window.size << "window is " << window.wind;
		return out;
	}
	void open()
	{
		this->wind = 'O';

	}
	void close()
	{
		this->wind = 'C';
	}
};

