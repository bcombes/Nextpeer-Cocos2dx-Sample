

//
#include "Util.h"
#include <iostream>
#include <string>
#include <sstream>
#include "PluginManager.h"
#include "AppDelegate.h"


using namespace cocos2d;

static float scale = 1.0f;
static int artScaleFactor = 1;

static cocos2d::plugin::ProtocolAnalytics* _pluginAnalytics;

ProtocolAnalytics* Util::getAnalyticsPlugin() {
	return _pluginAnalytics;
}

void Util::setAnalyticsPlugin(ProtocolAnalytics* analyticsPlugin ) {
	_pluginAnalytics = analyticsPlugin;
}




