#include "C_Window.h"
#include "C_Window_Small.h"
#include "C_Window_Big.h"
#include <iostream>

int main()
{
	C_Window wind0(10);
	std::cout << wind0 << "\n";

	C_Window_Small wind_small(2);
	std::cout << wind_small << "\n";
		
	C_Window_Big wind_big(20);
	std::cout << wind_big << "\n";
}
