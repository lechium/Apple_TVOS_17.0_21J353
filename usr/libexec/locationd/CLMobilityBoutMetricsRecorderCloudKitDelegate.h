//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLMobilityBoutMetricsRecorderCloudKitDelegate : NSObject
{
    void *fBoutMetricsDb;	// 8 = 0x8
}

- (_Bool)convertDataBlob:(id)arg1 toBoundStatement:(const void *)arg2;	// IMP=0x002000000066f91b
- (id)convertStatementToDataBlobs:(const void *)arg1;	// IMP=0x001000000066f75d
- (id)columns;	// IMP=0x001000000066f750
- (id)dataFieldKey;	// IMP=0x001000000066f743
- (id)zoneName;	// IMP=0x001000000066f736
- (id)recordType;	// IMP=0x001000000066f729
- (id)initWithBoutMetricsRecorderDb:(void *)arg1;	// IMP=0x001000000066f6ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

