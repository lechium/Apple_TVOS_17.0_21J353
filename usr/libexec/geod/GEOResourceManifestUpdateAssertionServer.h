//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class NSMapTable;

@interface GEOResourceManifestUpdateAssertionServer : GEOServer
{
    NSMapTable *_peerToAssertionRecord;	// 8 = 0x8
}

+ (id)identifier;	// IMP=0x00200000000157d9
- (void).cxx_destruct;	// IMP=0x001000000001f597
- (void)checkinForUpdateAssertionWithRequest:(id)arg1;	// IMP=0x001000000001f265
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x001000000001f18a
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x00100000000157e6

@end
