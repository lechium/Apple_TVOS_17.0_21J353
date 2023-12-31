//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SDStatusMonitor;
@protocol OS_dispatch_source;

@interface SDConnectedBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    int _recentsCount;	// 12 = 0xc
    int _connectedCount;	// 16 = 0x10
    _Bool _sendNotification;	// 20 = 0x14
    NSDictionary *_servers;	// 24 = 0x18
    NSDictionary *_odiskServers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    SDStatusMonitor *_monitor;	// 48 = 0x30
    struct __CFBag *_airDropPeople;	// 56 = 0x38
}

+ (id)sharedBrowser;	// IMP=0x004000000014beec
- (void).cxx_destruct;	// IMP=0x002000000014d528
- (void)stop;	// IMP=0x001000000014d48a
- (void)start;	// IMP=0x001000000014d38b
- (void)volumesChanged:(id)arg1;	// IMP=0x001000000014d371
- (void)removeAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x001000000014d2b7
- (void)removeAirDropPersonInternal:(struct __SFNode *)arg1;	// IMP=0x001000000014d20f
@property(readonly, copy) NSArray *airDropNodes;
- (void)addAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x001000000014d0c1
- (void)buildNodesAndNotify:(_Bool)arg1;	// IMP=0x001000000014d093
- (void)combineRecentAndConnectedNodes:(_Bool)arg1;	// IMP=0x001000000014ca6c
- (id)connectedNodes;	// IMP=0x001000000014c2cb
- (id)URLForRemounting:(id)arg1;	// IMP=0x001000000014c217
- (_Bool)opticalDisk:(id)arg1;	// IMP=0x001000000014c19b
- (void)setNodeModel:(struct __SFNode *)arg1 protocol:(id)arg2 url:(id)arg3;	// IMP=0x001000000014c195
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x001000000014c18a
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x001000000014c17f
- (id)recentNodes;	// IMP=0x001000000014c139
- (void)addToRecents:(id)arg1;	// IMP=0x001000000014c133
- (void)browseAfterDelay:(double)arg1;	// IMP=0x001000000014c113
- (void)postNotification;	// IMP=0x001000000014c0b4
@property(readonly, copy) NSArray *odiskNodes;
@property(readonly, copy) NSArray *nodes;
- (void)setODiskServers:(id)arg1;	// IMP=0x001000000014c039
- (void)setServers:(id)arg1;	// IMP=0x001000000014bfea
- (id)init;	// IMP=0x001000000014bf41

@end

