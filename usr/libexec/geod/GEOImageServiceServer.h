//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class MISSING_TYPE, NSMapTable, NSMutableArray, geo_isolater;

@interface GEOImageServiceServer : GEOServer
{
    MISSING_TYPE *_persistence;	// 8 = 0x8
    geo_isolater *_isolater;	// 16 = 0x10
    NSMutableArray *_requestsConsultingPersistence;	// 24 = 0x18
    NSMapTable *_originalRequestToPendingRequest;	// 32 = 0x20
}

+ (id)identifier;	// IMP=0x0020000000014328
- (void).cxx_destruct;	// IMP=0x00100000000215b0
- (void)purgeDiskCacheWithRequest:(id)arg1;	// IMP=0x00100000000214ff
- (void)calculateFreeableWithRequest:(id)arg1;	// IMP=0x0010000000021464
- (void)cancelImageServiceRequestWithRequest:(id)arg1;	// IMP=0x00100000000211a7
- (void)startImageServiceRequestWithRequest:(id)arg1;	// IMP=0x001000000001fbaa
- (id)initWithDaemon:(id)arg1;	// IMP=0x001000000001f9e4
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000014335

@end
