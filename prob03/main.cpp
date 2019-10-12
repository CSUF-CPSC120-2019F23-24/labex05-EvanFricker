// Random Rectangle

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstring>

int main()
{

  //Declaring my variables
  int width;
  const int divider = 40;

  //Getting a random number using the time feature
  srand(time(0));

  //Getting a number between 1 - 39 to get our box width
  width = rand() % divider + 1;

  //Displaying the box
  std::string box;
  box.assign(width, '#');
  std::cout << box << std::endl;
  std::cout << box << std::endl;
  std::cout << box << std::endl;

  return 0;
}
