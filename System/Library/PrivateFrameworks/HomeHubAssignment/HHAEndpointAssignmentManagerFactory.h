//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HHATimerFactory;

__attribute__((visibility("hidden")))
@interface HHAEndpointAssignmentManagerFactory : NSObject
{
    id <HHATimerFactory> _timerFactory;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000fbee
@property(readonly, nonatomic) id <HHATimerFactory> timerFactory; // @synthesize timerFactory=_timerFactory;
- (id)createEndpointAssignmentManagerWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000fb62
- (id)initWithTimerFactory:(id)arg1;	// IMP=0x000000000000faf7

@end

