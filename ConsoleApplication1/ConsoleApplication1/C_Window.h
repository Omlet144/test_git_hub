#pragma once
#include<ostream>

class C_Window
{
protected:
	double size;
public:
	C_Window()
	{
		this->size = 0.0;
	}
	C_Window(double size)
	{
		this->size = size;
	}
	friend std::ostream& operator << (std::ostream& out, const C_Window& window) {
		out << "size of Window " << window.size;
		return out;
	}

};

