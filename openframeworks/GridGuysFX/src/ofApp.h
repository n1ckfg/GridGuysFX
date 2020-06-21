#pragma once

#include "ofMain.h"
#include "GridGuy.h"

class ofApp : public ofBaseApp {

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
	
        //---   MAIN CONTROLS   ---
        //if you want to avoid chain reactions, try 0, 20, 100, 0.2
        int delayCounter = 0;  // delays start of spread
        int lifeCounter = 20;  // how long spread lasts
        int respawnCounter = 50; // how long until retrigger
        float globalChaos = 0.3;  // 0 = min, 1 = max
        //-------------------------
        int choose = 0;
        int maxChoices = 7;
        int numFrames = 50;
        int renderCounterMax = 1000;
        //----
        int pixelSize = 4;
        int sW = 640;
        int sH = 480;
        int fps = 60;

        int numColumns, numRows;
        float guyWidth, guyHeight, startX, startY;
        GridGuy[][] mainGrid;
        String setRules = "";
        float odds_X_Yplus1, odds_Xminus1_Y, odds_X_Yminus1, odds_Xplus1_Y, odds_Xplus1_Yplus1, odds_Xminus1_YminuX1, odds_Xplus1_Yminus1, odds_Xminus1_Yplus1;
        float[] randomValues = new float[8];

        void initGlobals();
        void rulesHandler(int x, int y);
        bool diceHandler(float v1, float v2);
        void rulesInit(int x, int y);
        void guysInit(int x, int y);
        void resetAll();
        void pixelOddsSetup();
    
};