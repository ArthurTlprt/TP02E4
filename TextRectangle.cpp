#include <iostream>
#include "TextRectangle.h"

using namespace std;


TextRectangle::TextRectangle(int width, int height) {
            this->width = width;
            this->height = height;
        }
        int TextRectangle::setWidth(int width)
        {
            this->width = width;
            return 0;
        }
        
        int TextRectangle::setHeight(int height)
        {
            this->height = height;
            return 0;
        }
        
        int TextRectangle::getWidth()
        {
            return this->width;
        }
        
        int TextRectangle::getHeight()
        {
            return this->height;
        }
        int TextRectangle::getArea()
        {
            int area = (this->width)*(this->height);
            return area;
        }
        int TextRectangle::getPerimeter()
        {
            int perimeter = (this->width)*2+(this->height)*2;
            return perimeter;
        }
        int TextRectangle::print()
        {
            cout << this->getArea() << endl;
            cout << this->getPerimeter()  << endl;
            
            cout << this->getWidth() << endl;
            cout << this->getHeight()  << endl;
            return 0;
        }
        int TextRectangle::drawArea(const char& pattern)
        {
            int i, j;
            for(j=0; j < this->height; j++){
                for(i=0; i < this->width; i++){
                    cout << pattern;
                }
                cout << endl;
            }
            return 0;
        }
