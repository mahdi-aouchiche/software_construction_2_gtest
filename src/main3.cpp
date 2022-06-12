#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;
int main()
{ 
    Rectangle rect, rect1;

    rect.set_width(15);
    rect1.set_width(50);

    rect.set_height(30); 
    rect1.set_height(30);

    cout << "Standard rectangle area: " << rect.area() << endl;
    cout << "Maximum rectangle area: " << rect1.area() << endl;
    return 0;
}

