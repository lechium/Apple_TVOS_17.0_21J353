//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractTicket.h"

@class GEOMapServiceTraits, GEOSpatialLookupBatchRequest, GEOSpatialLookupBatchResponse, NSArray, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _GEOBatchSpatialLookupTicket : GEOAbstractTicket
{
    GEOSpatialLookupBatchRequest *_request;	// 40 = 0x28
    GEOSpatialLookupBatchResponse *_response;	// 48 = 0x30
    NSArray *_parameters;	// 56 = 0x38
    NSMapTable *_parametersToMapItems;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000772578
- (CDStruct_026435ec)dataRequestKind;	// IMP=0x000000000077256d
- (id)mapItemsForParameters:(id)arg1;	// IMP=0x0000000000772550
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x000000000077223a
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2 queue:(id)arg3;	// IMP=0x0000000000772220
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;	// IMP=0x0000000000771cdb
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x0000000000771cc4
- (id)initWithRequest:(id)arg1 forParameters:(id)arg2 traits:(id)arg3;	// IMP=0x0000000000771bcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

