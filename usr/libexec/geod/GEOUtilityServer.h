//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOUtilityServer : GEOServer
{
}

+ (id)identifier;	// IMP=0x0020000000015e6e
- (void)currentServicesStateWithMessage:(id)arg1;	// IMP=0x001000000001e30d
- (void)getGeoServicesCacheDirectoryWithMessage:(id)arg1;	// IMP=0x001000000001e232
- (void)getHomeDirectoryWithMessage:(id)arg1;	// IMP=0x001000000001e157
- (void)heartbeatWithMessage:(id)arg1;	// IMP=0x001000000001e0b3
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000015e7b

@end

