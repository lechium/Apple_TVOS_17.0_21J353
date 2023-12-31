//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface OTSOSMissingAdapter : NSObject
{
    _Bool _essential;	// 8 = 0x8
    NSString *_providerID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008bc11
@property _Bool essential; // @synthesize essential=_essential;
@property(readonly) NSString *providerID; // @synthesize providerID=_providerID;
- (_Bool)resetToOffering:(id *)arg1;	// IMP=0x001000000008bb93
- (_Bool)joinAfterRestore:(id *)arg1;	// IMP=0x001000000008bb3d
- (_Bool)preloadOctagonKeySetOnAccount:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008bae7
- (_Bool)safariViewSyncingEnabled:(id *)arg1;	// IMP=0x001000000008badf
- (id)currentState;	// IMP=0x001000000008ba13
- (void)sendTrustedPeerSetChangedUpdate;	// IMP=0x001000000008ba0d
- (void)sendSelfPeerChangedUpdate;	// IMP=0x001000000008ba07
- (void)registerForPeerChangeUpdates:(id)arg1;	// IMP=0x001000000008ba01
- (id)fetchSelfPeers:(id *)arg1;	// IMP=0x001000000008b9ab
- (_Bool)updateCKKS4AllStatus:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000008b955
- (_Bool)updateOctagonKeySetWithAccount:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008b8ff
- (id)fetchTrustedPeers:(id *)arg1;	// IMP=0x001000000008b8a9
- (id)currentSOSSelf:(id *)arg1;	// IMP=0x001000000008b853
- (int)circleStatus:(id *)arg1;	// IMP=0x001000000008b848
@property(readonly, nonatomic) _Bool sosEnabled;
- (id)init;	// IMP=0x001000000008b7eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

