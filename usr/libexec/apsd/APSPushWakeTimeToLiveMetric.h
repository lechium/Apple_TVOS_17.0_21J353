//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface APSPushWakeTimeToLiveMetric : NSObject
{
    _Bool _connectedOnWake;	// 8 = 0x8
    _Bool _everConnected;	// 9 = 0x9
    NSString *_guid;	// 16 = 0x10
    NSNumber *_timeToFullyConnect;	// 24 = 0x18
    NSNumber *_timeToLastFromStorage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000008733
@property(retain, nonatomic) NSNumber *timeToLastFromStorage; // @synthesize timeToLastFromStorage=_timeToLastFromStorage;
@property(retain, nonatomic) NSNumber *timeToFullyConnect; // @synthesize timeToFullyConnect=_timeToFullyConnect;
@property(nonatomic) _Bool everConnected; // @synthesize everConnected=_everConnected;
@property(nonatomic) _Bool connectedOnWake; // @synthesize connectedOnWake=_connectedOnWake;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;
- (id)initWithGuid:(id)arg1 connectedOnWake:(_Bool)arg2 everConnected:(_Bool)arg3 timeToFullyConnect:(id)arg4 timeToLastFromStorage:(id)arg5;	// IMP=0x0010000000008433

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

