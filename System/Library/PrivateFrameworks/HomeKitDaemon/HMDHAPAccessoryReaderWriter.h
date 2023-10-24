//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHAPAccessoryTaskTracker, HMDHome, NSString;
@protocol HMDHAPAccessoryReaderWriterDataSource;

__attribute__((visibility("hidden")))
@interface HMDHAPAccessoryReaderWriter : NSObject
{
    HMDHAPAccessoryTaskTracker *_tracker;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    id <HMDHAPAccessoryReaderWriterDataSource> _dataSource;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000cb1e37
- (void).cxx_destruct;	// IMP=0x0000000000cb18b7
@property(readonly) id <HMDHAPAccessoryReaderWriterDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMDHAPAccessoryTaskTracker *tracker; // @synthesize tracker=_tracker;
- (id)logIdentifier;	// IMP=0x0000000000cb17ff
- (CDUnknownBlockType)_completionHandlerWithContext:(id)arg1;	// IMP=0x0000000000cb170e
- (_Bool)_isPrimaryResidentDevice;	// IMP=0x0000000000cb16ca
- (_Bool)_isSecondaryResidentDevice;	// IMP=0x0000000000cb1669
- (_Bool)_isNotResidentDevice;	// IMP=0x0000000000cb1621
- (_Bool)_cannotForwardMessage:(id)arg1;	// IMP=0x0000000000cb1605
- (void)submitWriteRequests:(id)arg1 sourceType:(unsigned long long)arg2 requestMessage:(id)arg3;	// IMP=0x0000000000cb1214
- (id)_defaultTaskForCurrentDeviceWithContext:(id)arg1 requests:(id)arg2;	// IMP=0x0000000000cb100c
- (void)submitReadRequests:(id)arg1 sourceType:(unsigned long long)arg2 requestMessage:(id)arg3;	// IMP=0x0000000000cb0c25
- (void)handleRemotelyUpdatedCharacteristicsMessage:(id)arg1;	// IMP=0x0000000000cb08bc
- (id)initWithHome:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000cb080d
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000cb07a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

