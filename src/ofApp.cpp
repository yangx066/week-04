#include "ofApp.h"
#include "ofMain.h"
ofFbo fbo;

//--------------------------------------------------------------
void ofApp::setup(){
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);
    fbo.begin();
    ofClear(255,255,255, 0);
    fbo.end();
    
    // macs by default run on non vertical sync, which can make animation very, very fast
    // this fixes that:
    ofSetVerticalSync(true);
    
    // set background:
    ofEnableAlphaBlending();
    ofBackground(30,30,30);
    
    myRectangle.pos.x = ofRandom(0, ofGetWidth());
    myRectangle.pos.y = ofRandom(0, ofGetHeight());
    myRectangle1.pos.x = ofRandom(0, ofGetWidth());
    myRectangle1.pos.y = ofRandom(0, ofGetHeight());
    myRectangle2.pos.x = ofRandom(0, ofGetWidth());
    myRectangle2.pos.y = ofRandom(0, ofGetHeight());
    myRectangle3.pos.x = ofRandom(0, ofGetWidth());
    myRectangle3.pos.y = ofRandom(0, ofGetHeight());
    myRectangle4.pos.x = ofRandom(0, ofGetWidth());
    myRectangle4.pos.y = ofRandom(0, ofGetHeight());
    myRectangle5.pos.x = ofRandom(0, ofGetWidth());
    myRectangle5.pos.y = ofRandom(0, ofGetHeight());
    
    myRedCircle.pos.x = ofRandom(0, ofGetWidth());
    myRedCircle.pos.y = ofRandom(0, ofGetHeight());
    myRedCircle1.pos.x = ofRandom(0, ofGetWidth());
    myRedCircle1.pos.y = ofRandom(0, ofGetHeight());
    myRedCircle2.pos.x = ofRandom(0, ofGetWidth());
    myRedCircle2.pos.y = ofRandom(0, ofGetHeight());
    myRedCircle3.pos.x = ofRandom(0, ofGetWidth());
    myRedCircle3.pos.y = ofRandom(0, ofGetHeight());
    myRedCircle4.pos.x = ofRandom(0, ofGetWidth());
    myRedCircle4.pos.y = ofRandom(0, ofGetHeight());
    myRedCircle5.pos.x = ofRandom(0, ofGetWidth());
    myRedCircle5.pos.y = ofRandom(0, ofGetHeight());
    
    myOrangeTriangle.pos.x = ofRandom(0, ofGetWidth());
    myOrangeTriangle.pos.y = ofRandom(0, ofGetHeight());
    myOrangeTriangle1.pos.x = ofRandom(0, ofGetWidth());
    myOrangeTriangle1.pos.y = ofRandom(0, ofGetHeight());
    myOrangeTriangle2.pos.x = ofRandom(0, ofGetWidth());
    myOrangeTriangle2.pos.y = ofRandom(0, ofGetHeight());
    myOrangeTriangle3.pos.x = ofRandom(0, ofGetWidth());
    myOrangeTriangle3.pos.y = ofRandom(0, ofGetHeight());
    myOrangeTriangle4.pos.x = ofRandom(0, ofGetWidth());
    myOrangeTriangle4.pos.y = ofRandom(0, ofGetHeight());
    myOrangeTriangle5.pos.x = ofRandom(0, ofGetWidth());
    myOrangeTriangle5.pos.y = ofRandom(0, ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
    myRectangle.zenoToPoint(mouseX, mouseY);
    myRedCircle.zenoToPoint(mouseX, mouseY);
    myOrangeTriangle.zenoToPoint(mouseX, mouseY);
    myRectangle1.zenoToPoint(mouseX, mouseY);
    myRedCircle1.zenoToPoint(mouseX, mouseY);
    myOrangeTriangle1.zenoToPoint(mouseX, mouseY);
    myRectangle2.zenoToPoint(mouseX, mouseY);
    myRedCircle2.zenoToPoint(mouseX, mouseY);
    myOrangeTriangle2.zenoToPoint(mouseX, mouseY);
    myRectangle3.zenoToPoint(mouseX, mouseY);
    myRedCircle3.zenoToPoint(mouseX, mouseY);
    myOrangeTriangle3.zenoToPoint(mouseX, mouseY);
    myRectangle4.zenoToPoint(mouseX, mouseY);
    myRedCircle4.zenoToPoint(mouseX, mouseY);
    myOrangeTriangle4.zenoToPoint(mouseX, mouseY);
    myRectangle5.zenoToPoint(mouseX, mouseY);
    myRedCircle5.zenoToPoint(mouseX, mouseY);
    myOrangeTriangle5.zenoToPoint(mouseX, mouseY);
}

//--------------------------------------------------------------
void ofApp::draw(){
    fbo.begin();
    ofSetColor(0,0,0, 10); // black with alpha
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofSetColor(0,0,255);
    myRectangle.draw();
    myRedCircle.draw();
    myOrangeTriangle.draw();
    myRectangle1.draw();
    myRedCircle1.draw();
    myOrangeTriangle1.draw();
    myRectangle2.draw();
    myRedCircle2.draw();
    myOrangeTriangle2.draw();
    myRectangle3.draw();
    myRedCircle3.draw();
    myOrangeTriangle3.draw();
    myRectangle4.draw();
    myRedCircle4.draw();
    myOrangeTriangle4.draw();
    myRectangle5.draw();
    myRedCircle5.draw();
    myOrangeTriangle5.draw();
    fbo.end();
    
    ofSetColor(255,255,255);
    fbo.draw(0,0);
    
    
}
