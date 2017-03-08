//
//  orangeTriangle.cpp
//  week 4 homework1
//
//  Created by yang on 2/22/17.
//
//

#include "orangeTriangle.hpp"

orangeTriangle::orangeTriangle(){
    catchUpSpeed = 0.06f;
}

void orangeTriangle::draw(){
    ofFill();
    ofSetColor(255,150,5);
    ofDrawTriangle(pos.x, pos.y, pos.x+10, pos.y+5, pos.x-10, pos.y+10);
    
}

void orangeTriangle::zenoToPoint(float catchX, float catchY){
    pos.x = pos.x+1.414*(catchX - pos.x)/ofDist(pos.x,pos.y,catchX,catchY);
    pos.y = pos.y+1.414*(catchY - pos.y)/ofDist(pos.x,pos.y,catchX,catchY);
}
