//
//  redCircle.hpp
//  week 4 homework1
//
//  Created by yang on 2/22/17.
//
//

#ifndef redCircle_hpp
#define redCircle_hpp

#include <stdio.h>
#include "ofMain.h"

class redCircle{
public:
    
    redCircle();
    void draw();
    void zenoToPoint(float catchX, float catchY);
    
    ofPoint pos;
    float catchUpSpeed;
    
    
};

#endif /* redCircle_hpp */
