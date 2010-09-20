//
//  WhereamiAppDelegate.h
//  Whereami
//
//  Created by Chris Readle (GMC-MSV-IT CONTRACTOR) on 9/17/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface WhereamiAppDelegate : NSObject 
<UIApplicationDelegate, CLLocationManagerDelegate, MKMapViewDelegate, MKReverseGeocoderDelegate> {
    UIWindow *window;
	CLLocationManager *locationManager;
	MKReverseGeocoder *reverseGeocoder;
	
	IBOutlet MKMapView *mapView;
	IBOutlet UIActivityIndicatorView *activityIndicator;
	IBOutlet UITextField *locationTitleField;
}



@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) MKReverseGeocoder *reverseGeocoder;

- (void)findLocation;
- (void)foundLocation;

@end

