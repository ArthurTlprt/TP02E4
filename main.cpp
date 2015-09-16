/* 
 * File:   main.cpp
 * Author: isen
 *
 * Created on 16 septembre 2015, 15:45
 */

#include <iostream>
#include "TextRectangle.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    TextRectangle rect(4,6);
    
    rect.print();
    
    const char* l = "m";
    rect.drawArea(l);
    
    return 0;
}

