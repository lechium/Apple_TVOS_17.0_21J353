//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraMetricsSnapshotLogEvent
{
    _Bool _snapshotForNotification;	// 32 = 0x20
    NSNumber *_referenceTimestamp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000071ab55
@property(retain, nonatomic) NSNumber *referenceTimestamp; // @synthesize referenceTimestamp=_referenceTimestamp;
@property(readonly, nonatomic) _Bool snapshotForNotification; // @synthesize snapshotForNotification=_snapshotForNotification;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(_Bool)arg3 snapshotForNotification:(_Bool)arg4;	// IMP=0x000000000071aadd

@end

