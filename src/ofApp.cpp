#include "ofApp.h"
#include <iostream>
#include <random>
#include <string>
#include <map>

using namespace std;
//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)

      
std::random_device rd;
std::mt19937 rgen1(rd());
std::mt19937 rgen2(rd());
//int X = rd();//{500, 1000, 30, 100, 300, 200, 750, 380 };// set of x-coordinates for jewel
//int Y = rd();//{630, 400, 900,40, 200, 0, 90, 30}; //set of y-coordinates for jewel



random_device rDev;
mt19937 rgen(rDev());

uniform_int_distribution<> distribution(0,1200);
 uniform_int_distribution<> distribution1(0,970);
    
    for(auto i = 0u; i < 20; i++){
    X.push_back(distribution(rgen));
        
    Y.push_back(distribution1(rgen));
}
}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
