//
//  MapPoint.m
//  Whereami
//
//  Created by Chris Readle (GMC-MSV-IT CONTRACTOR) on 9/17/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "MapPoint.h"


@implementation MapPoint
@synthesize coordinate, title;

- (id)initWithCoordinate:(CLLocationCoordinate2D)c title:(NSString *)t
{
	[super init];
	coordinate = c;
	[self setTitle:t];
	return self;
}

- (void)dealloc
{
	[title release];
	[super dealloc];
}

@end
