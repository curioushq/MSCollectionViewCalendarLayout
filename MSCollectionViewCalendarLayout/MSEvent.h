//
//  MSEvent.h
//  Example
//
//  Created by Eric Horacek on 2/26/13.
//  Copyright (c) 2013 Monospace Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSEvent : NSObject

@property (nonatomic, strong) EKEvent *event;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *location;

@end
