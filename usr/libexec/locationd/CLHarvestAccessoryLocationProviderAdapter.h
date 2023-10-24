//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLHarvestAccessoryLocationProviderAdapter : NSObject
{
    void *_monitorGpsExternal;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x0010000000206c3a
- (void)accessoryDidDisconnect:(id)arg1;	// IMP=0x0010000000206c26
- (void)accessoryDidConnect:(id)arg1;	// IMP=0x0010000000206c11
- (id)initWithMonitorGpsExternal:(void *)arg1;	// IMP=0x0010000000206bd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
