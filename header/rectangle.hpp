#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

class Rectangle {
	private:
		int width;
		int height;
	public:
		void set_width(int w);
		void set_height(int h);
		int area();
};

#endif // __RECTANGLE_HPP__

