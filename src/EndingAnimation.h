//
//  EndingAnimation.h
//  animationFunction
//
//  Created by Takuya Okamoto on 2014/08/28.
//
//

#ifndef __animationFunction__EndingAnimation__
#define __animationFunction__EndingAnimation__
#include <iostream>
#endif /* defined(__animationFunction__EndingAnimation__) */
#pragma once
#include "ofMain.h"


class EndingAnimation {
    
public:
    void setup();
    void draw();
    bool update();
    void start(int score);
    
    ofVec2f position;
    ofTrueTypeFont font;
    string scoreText;
    int alpha;
    bool isEnd;
    
private:
    string toString(int n);
};