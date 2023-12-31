//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

@interface SOSKVSCircleStorageTransport
{
    NSMutableDictionary *pending_changes;	// 16 = 0x10
    NSString *circleName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000020d667
@property(retain, nonatomic) NSString *circleName; // @synthesize circleName;
@property(retain, nonatomic) NSMutableDictionary *pending_changes; // @synthesize pending_changes;
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000020d57f
- (_Bool)kvsSendOfficialDSID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000020d520
- (_Bool)kvsRingFlushChanges:(struct __CFError **)arg1;	// IMP=0x001000000020d50e
- (_Bool)kvsRingPostRing:(struct __CFString *)arg1 ring:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000020d4c0
- (_Bool)kvsSendAccountChangedWithDSID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000020d43a
- (_Bool)kvssendDebugInfo:(struct __CFString *)arg1 debug:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000020d3a2
- (_Bool)kvsAppendDebugKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x001000000020d36a
- (_Bool)kvsAppendRingKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x001000000020d1e3
- (_Bool)kvsAppendKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x001000000020d062
- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000020cfe2
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000020cd73
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000020cd25
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x001000000020cd13
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000020cc76
- (void)kvsAddToPendingChanges:(struct __CFString *)arg1 data:(struct __CFData *)arg2;	// IMP=0x001000000020cb6e
- (_Bool)kvsSendPendingChanges:(struct __CFError **)arg1;	// IMP=0x001000000020ca36
- (long long)getTransportType;	// IMP=0x001000000020ca2b
- (id)getCircleName;	// IMP=0x001000000020ca19
- (id)initWithAccount:(id)arg1 andCircleName:(id)arg2;	// IMP=0x001000000020c907
- (id)init;	// IMP=0x001000000020c8d8

@end

