//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractMapServiceTicket.h"

@class GEOMapItemIdentifier, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOComponentsTicket : GEOAbstractMapServiceTicket
{
    NSDictionary *_components;	// 256 = 0x100
    GEOMapItemIdentifier *_identifier;	// 264 = 0x108
    int _resultProviderID;	// 272 = 0x110
    NSString *_contentProvider;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x000000000076d203
- (CDStruct_026435ec)dataRequestKind;	// IMP=0x000000000076d1d2
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x000000000076cfac
- (id)description;	// IMP=0x000000000076cf05
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5;	// IMP=0x000000000076cdf4
- (id)initWithTraits:(id)arg1;	// IMP=0x000000000076cdc5

@end

