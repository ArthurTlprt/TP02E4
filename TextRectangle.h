/* 
 * File:   TextRectangle.h
 * Author: isen
 *
 * Created on 16 septembre 2015, 15:47
 */

class TextRectangle {
    private :
        int width;
        int height;
        
    public:
        TextRectangle(int width, int height);
        int setWidth(int width);        
        int setHeight(int height);
        int getWidth();
        int getHeight();
        int getArea();
        int getPerimeter();
        int print();
        int drawArea(const char& pattern);
};

