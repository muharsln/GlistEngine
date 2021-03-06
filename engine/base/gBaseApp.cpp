/*
 * gBaseApp.cpp
 *
 *  Created on: May 6, 2020
 *      Author: noyan
 */

#include "gBaseApp.h"


gBaseApp::gBaseApp() {
	appmanager = nullptr;
	gSeedRandom();
}

gBaseApp::~gBaseApp() {
}

void gBaseApp::setup() {

}

void gBaseApp::update() {

}

void gBaseApp::setAppManager(gAppManager *appManager) {
	appmanager = appManager;
}

gAppManager* gBaseApp::getAppManager() {
	return appmanager;
}

void gBaseApp::setFramerate(int targetFramerate) {
	appmanager->setFramerate(targetFramerate);
}

int gBaseApp::getFramerate() {
	return appmanager->getFramerate();
}
