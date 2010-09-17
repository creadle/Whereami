//
//  WhereamiAppDelegate.h
//  Whereami
//
//  Created by Chris Readle (GMC-MSV-IT CONTRACTOR) on 9/17/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface WhereamiAppDelegate : NSObject <UIApplicationDelegate, CLLocationManagerDelegate> {
    UIWindow *window;
	CLLocationManager *locationManager;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

