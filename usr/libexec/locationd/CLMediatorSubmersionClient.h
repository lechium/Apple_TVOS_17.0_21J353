//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLMediatorSubmersionClient : NSObject
{
    void *_client;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onSubmersionMeasurementUpdate:(id)arg1;	// IMP=0x0010000000336e92
- (void)onSubmersionStateUpdate:(id)arg1;	// IMP=0x0010000000336e8c
- (id)initWithMediator:(void *)arg1;	// IMP=0x0010000000336e41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

