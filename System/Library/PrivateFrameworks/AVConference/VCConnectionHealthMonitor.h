//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, VCConnectionHealthMonitorDelegate;

__attribute__((visibility("hidden")))
@interface VCConnectionHealthMonitor : NSObject
{
    unsigned char _lastReportedIndex;	// 8 = 0x8
    struct ConnectionStatsHistory _statsHistory;	// 9 = 0x9
    struct _opaque_pthread_rwlock_t _peerStateRWLock;	// 40 = 0x28
    struct ConnectionStatsHistory _peerStatsHistory;	// 240 = 0xf0
    id _delegate;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 280 = 0x118
    struct _opaque_pthread_rwlock_t _stateRWLock;	// 288 = 0x120
    struct ConnectionStats _currentReceivingStats;	// 488 = 0x1e8
    struct ConnectionStats _tempReceivingStats;	// 504 = 0x1f8
    _Bool _firstPacketReceived;	// 520 = 0x208
    double _primaryConnHealthAllowedDelay;	// 528 = 0x210
    _Bool _usingServerBasedLinks;	// 536 = 0x218
    struct ConnectionStatsSequenceNumberData _secondaryConnReceivedSequenceNumberStats[1024];	// 544 = 0x220
}

@property _Bool usingServerBasedLinks; // @synthesize usingServerBasedLinks=_usingServerBasedLinks;
@property double primaryConnHealthAllowedDelay; // @synthesize primaryConnHealthAllowedDelay=_primaryConnHealthAllowedDelay;
- (void)resetHistory:(struct ConnectionStatsHistory *)arg1;	// IMP=0x000000000031b018
- (void)resetConnectionStats:(_Bool)arg1;	// IMP=0x000000000031afbe
- (void)processPeerStatsBlob:(unsigned int)arg1;	// IMP=0x000000000031aab8
- (unsigned int)generateStatsBlob;	// IMP=0x000000000031aa06
@property id <VCConnectionHealthMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x000000000031a643
- (id)init;	// IMP=0x000000000031a4b5

@end

