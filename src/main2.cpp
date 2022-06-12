#include "../header/rectangle.hpp"
#include <iostream> 

using namespace std; 

int main() 
{ 
    Rectangle rect; 
    int width = 0;
    int height = 0;

    cout << "Enter the width: "; 
    cin >> width;

    cout << "Enter the height: ";
    cin >> height;

    rect.set_width(width); 
    rect.set_height(height); 
    cout << "Rectangle area: " << rect.area() << endl; 
    return 0; 
}


