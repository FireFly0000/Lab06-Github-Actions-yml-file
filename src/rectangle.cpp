#include "../header/rectangle.hpp"

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

Rectangle::Rectangle(int w, int h){
	if (w < 0){
	    set_width(0);
	}
	else{
		set_width(w);
	}
	if (h<0){
	    set_height(0);
	}
	else
	set_height(h);
}
int Rectangle::perimeter(){

	if (this->width == 0 || this->height == 0) // width and height must be positive values 
	{ 
	return 0;
	}

	return(this->width + this->height)*2;}
}

int Rectangle::area() {
    return this->width * this->height;
}
