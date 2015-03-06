
/*
 * Util.h
 *
 *  Created on: 31 Oct 2014
 *      Author: Daniel Micah
 */

#ifndef Utils_h
#define Utils_h

#include "cocos2d.h"
#include "ProtocolAnalytics.h"


using namespace cocos2d;
using namespace cocos2d::plugin;

class Util
{
public:


    static ProtocolAnalytics* getAnalyticsPlugin();
    static void setAnalyticsPlugin(ProtocolAnalytics* analyticsPlugin );

};

#endif

/*
 * Util.h
 *
 *  Created on: 31 Oct 2014
 *      Author: Daniel Micah
 */


