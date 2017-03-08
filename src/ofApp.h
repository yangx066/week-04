#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "rectangle.h"
#include "redCircle.hpp"
#include "orangeTriangle.hpp"

class ofApp : public ofSimpleApp{
    
public:
    
    void setup();
    void update();
    void draw();
    
    rectangle myRectangle;
    redCircle myRedCircle;
    orangeTriangle myOrangeTriangle;
    rectangle myRectangle1;
    redCircle myRedCircle1;
    orangeTriangle myOrangeTriangle1;
    rectangle myRectangle2;
    redCircle myRedCircle2;
    orangeTriangle myOrangeTriangle2;
    rectangle myRectangle3;
    redCircle myRedCircle3;
    orangeTriangle myOrangeTriangle3;
    rectangle myRectangle4;
    redCircle myRedCircle4;
    orangeTriangle myOrangeTriangle4;
    rectangle myRectangle5;
    redCircle myRedCircle5;
    orangeTriangle myOrangeTriangle5;
    
    
};

#endif
