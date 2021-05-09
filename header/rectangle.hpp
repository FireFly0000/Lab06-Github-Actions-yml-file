#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle();
        Rectangle(int w,int h);
 	int get_width(){
		return -1;
	}
	int get_height(){
		return -1;
	}
        void set_width(int w);
        void set_height(int h);
        int area();
        int perimeter();
};

#endif // RECTANGLE_HPP
