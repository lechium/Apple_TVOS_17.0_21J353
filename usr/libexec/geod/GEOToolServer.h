//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOToolServer : GEOServer
{
}

+ (id)identifier;	// IMP=0x0020000000013f37
- (void)notifyNetworkDefaultsChangedWithMessage:(id)arg1;	// IMP=0x001000000001efce
- (void)listFilePathsWithMessage:(id)arg1;	// IMP=0x001000000001ef61
- (void)invalidateTileCacheWithMessage:(id)arg1;	// IMP=0x001000000001ee44
- (void)freePurgableSpaceWithMessage:(id)arg1;	// IMP=0x001000000001ea7b
- (void)calculatePurgableSpaceWithMessage:(id)arg1;	// IMP=0x001000000001e7e4
- (void)getDefaultWithMessage:(id)arg1;	// IMP=0x001000000001e644
- (void)checkProactiveTileDownloadPolicyEnabledWithMessage:(id)arg1;	// IMP=0x001000000001e567
- (void)forceProactiveTileDownloaderRunWithMessage:(id)arg1;	// IMP=0x001000000001e550
- (void)lockDBsWithMessage:(id)arg1;	// IMP=0x001000000001e4be
- (void)unlockDBsWithMessage:(id)arg1;	// IMP=0x001000000001e42c
- (void)pingWithMessage:(id)arg1;	// IMP=0x001000000001e410
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000013f44

@end
