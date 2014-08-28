//
//  dot.h
//  scene_projections
//
//  Created by Julien Bloit on 28/08/14.
//
//

#ifndef __scene_projections__dot__
#define __scene_projections__dot__

#include <iostream>
#include "ofxBox2d.h"
#include "_projectGlobals.h"

// Dot blob, with star-shaped skeleton
class dot{

public:
    void setup(float _x, float _y);
    void update();
    void draw();

private:
    float nucleus_x;
    float nucleus_y;
    int numberOfNodes;
    ofxBox2dCircle nucleus; // center
    vector <ofPtr<ofxBox2dCircle> >	nodes;		  //	default box2d circles
	vector <ofPtr<ofxBox2dJoint> > joints;			  //	joints
};



#endif /* defined(__scene_projections__dot__) */
