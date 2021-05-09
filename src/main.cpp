#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect1(3,4);
    Rectangle rect2(2,4);
    
	
    cout << "Rectangle 1 area: " << rect1.area() << endl;
    cout << "Rectangle 2 area: " << rect2.area() << endl;

    return 0;
}
