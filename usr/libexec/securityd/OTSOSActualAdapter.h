//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSListenerCollection, NSString;

@interface OTSOSActualAdapter : NSObject
{
    _Bool _essential;	// 8 = 0x8
    NSString *_providerID;	// 16 = 0x10
    CKKSListenerCollection *_peerChangeListeners;	// 24 = 0x18
}

+ (id)sosCKKSViewList;	// IMP=0x002000000008b798
- (void).cxx_destruct;	// IMP=0x002000000008a99f
@property(retain) CKKSListenerCollection *peerChangeListeners; // @synthesize peerChangeListeners=_peerChangeListeners;
@property(readonly) NSString *providerID; // @synthesize providerID=_providerID;
@property _Bool essential; // @synthesize essential=_essential;
- (_Bool)resetToOffering:(id *)arg1;	// IMP=0x001000000008a823
- (_Bool)joinAfterRestore:(id *)arg1;	// IMP=0x001000000008a6f2
- (_Bool)safariViewSyncingEnabled:(id *)arg1;	// IMP=0x001000000008a63e
- (id)currentState;	// IMP=0x001000000008a55d
- (void)sendTrustedPeerSetChangedUpdate;	// IMP=0x001000000008a4df
- (void)sendSelfPeerChangedUpdate;	// IMP=0x001000000008a461
- (void)registerForPeerChangeUpdates:(id)arg1;	// IMP=0x001000000008a3f8
- (_Bool)updateCKKS4AllStatus:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000008a20c
- (_Bool)updateOctagonKeySetWithAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000898e8
- (_Bool)preloadOctagonKeySetOnAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000089104
- (id)fetchTrustedPeers:(id *)arg1;	// IMP=0x0010000000088eac
- (id)fetchSelfPeers:(id *)arg1;	// IMP=0x0010000000088de4
- (id)currentSOSSelf:(id *)arg1;	// IMP=0x00100000000887d4
- (int)circleStatus:(id *)arg1;	// IMP=0x001000000008872a
@property(readonly, copy) NSString *description;
- (id)initAsEssential:(_Bool)arg1;	// IMP=0x00100000000885ad
@property(readonly, nonatomic) _Bool sosEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
