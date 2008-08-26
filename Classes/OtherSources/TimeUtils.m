//
//  TimeUtils.m
//  TwitterFon
//
//  Created by kaz on 8/26/08.
//  Copyright 2008 naan studio. All rights reserved.
//

#import "TimeUtils.h"


@implementation Stopwatch

- (Stopwatch*) init
{
    self = [super init];
    gettimeofday(&tv1, NULL);
    return self;
}

+ (Stopwatch*) stopwatch
{
    return [[[Stopwatch alloc] init] autorelease];
}

- (void) lap:(NSString*)message
{
    gettimeofday(&tv2, NULL);
    
    uint64_t sec = tv2.tv_sec - tv1.tv_sec;
    
    uint64_t diff = sec * 1000 * 1000 + (tv2.tv_usec - tv1.tv_usec);
    
    NSLog(@"%@ (%lld.%lld)", message, diff / 1000000, diff % 1000000);
}

@end
