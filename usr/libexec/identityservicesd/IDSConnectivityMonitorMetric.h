//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSConnectivityMonitorMetricProperties, NSDictionary, NSString;

@interface IDSConnectivityMonitorMetric : NSObject
{
    IDSConnectivityMonitorMetricProperties *_properties;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001b7120
@property(retain, nonatomic) IDSConnectivityMonitorMetricProperties *properties; // @synthesize properties=_properties;
@property(readonly) unsigned short rtcType;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;
- (id)initWithProperties:(id)arg1;	// IMP=0x00100000001b6cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

