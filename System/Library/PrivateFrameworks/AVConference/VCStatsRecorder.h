//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCStatsRecorder : NSObject
{
    struct _opaque_pthread_rwlock_t _stateRWLock;	// 8 = 0x8
    CDStruct_b5e1e8f2 _localStats[128];	// 208 = 0xd0
    unsigned short _currentLocalStatsIndex;	// 3280 = 0xcd0
    unsigned int _uplinkServerStatsByteUsed;	// 3284 = 0xcd4
}

- (int)serverStatsSizeInByteForUplink:(_Bool)arg1 connection:(id)arg2;	// IMP=0x00000000000ee151
- (CDStruct_b5e1e8f2)getMostRecentLocalStats;	// IMP=0x00000000000ee0d7
- (void)getLocalStats:(unsigned short)arg1 localSessionStats:(CDStruct_b5e1e8f2 *)arg2;	// IMP=0x00000000000ee01c
- (void)updateSessionStats:(unsigned short)arg1 connection:(id)arg2 totalPacketSent:(unsigned int)arg3 totalPacketReceived:(unsigned int)arg4;	// IMP=0x00000000000edee4
- (void)dealloc;	// IMP=0x00000000000ede87
- (id)init;	// IMP=0x00000000000ede0a

@end

