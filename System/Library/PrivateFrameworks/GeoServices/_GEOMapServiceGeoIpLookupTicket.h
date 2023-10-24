//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractTicket.h"

@class GEOPDPlaceRequest, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceGeoIpLookupTicket : GEOAbstractTicket
{
    GEOPDPlaceRequest *_placeRequest;	// 40 = 0x28
    id _requestToken;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000077e44e
@property(readonly, nonatomic) CDStruct_026435ec dataRequestKind;
- (void)cancel;	// IMP=0x000000000077e374
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3 handlerQueue:(id)arg4;	// IMP=0x000000000077e07a
- (id)initWithIpAddress:(id)arg1;	// IMP=0x000000000077df95

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

