//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPBTransitRoutingIncidentMessage, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitRoutingIncidentMessage : NSObject
{
    GEOPBTransitRoutingIncidentMessage *_routingIncidentMessage;	// 8 = 0x8
    NSArray *_transitIncidents;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000117e140
- (void).cxx_destruct;	// IMP=0x000000000117eb8b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000117e8b4
@property(readonly, nonatomic) NSArray *transitIncidents;
@property(readonly, nonatomic) NSString *routingMessage;
- (id)_fakeTransitLineIncidentInLine:(id)arg1;	// IMP=0x000000000117e659
- (void)_populateTransitIncidentsWithDecoderData:(id)arg1;	// IMP=0x000000000117e518
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000117e4a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000117e370
- (id)initFakeLineIncidentMessageInLine:(id)arg1;	// IMP=0x000000000117e28a
- (id)initWithIncidentMessage:(id)arg1 decoderData:(id)arg2;	// IMP=0x000000000117e1ea
- (id)initWithIncidentMessageIndex:(unsigned long long)arg1 decoderData:(id)arg2;	// IMP=0x000000000117e148

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

