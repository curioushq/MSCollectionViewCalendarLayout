//
//  MSEvent.m
//  Example
//
//  Created by Eric Horacek on 2/26/13.
//  Copyright (c) 2013 Monospace Ltd. All rights reserved.
//

#import "MSEvent.h"
#import <EventKit/EventKit.h>

@implementation MSEvent

- (NSDate *)start
{ 
    return self.event.startDate;
}

- (NSString *)title
{
    return self.event.title;
}

- (NSString *)location
{
    return self.event.location;
}

@end

