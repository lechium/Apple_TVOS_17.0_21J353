//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, PBCodable;
@protocol NSCopying;

@interface APSPushConnectionConnectedMetric : NSObject
{
    NSString *_guid;	// 8 = 0x8
    NSNumber *_connectDuration;	// 16 = 0x10
    unsigned int _connectionType;	// 24 = 0x18
    NSNumber *_linkQuality;	// 32 = 0x20
    unsigned int _dualChannelState;	// 40 = 0x28
    NSNumber *_dnsResolutionTimeMilliseconds;	// 48 = 0x30
    NSNumber *_tlsHandshakeTimeMilliseconds;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000b9cb9
@property(readonly, nonatomic) NSNumber *tlsHandshakeTimeMilliseconds; // @synthesize tlsHandshakeTimeMilliseconds=_tlsHandshakeTimeMilliseconds;
@property(readonly, nonatomic) NSNumber *dnsResolutionTimeMilliseconds; // @synthesize dnsResolutionTimeMilliseconds=_dnsResolutionTimeMilliseconds;
@property(readonly, nonatomic) unsigned int dualChannelState; // @synthesize dualChannelState=_dualChannelState;
@property(readonly, nonatomic) NSNumber *linkQuality; // @synthesize linkQuality=_linkQuality;
@property(readonly, nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) NSNumber *connectDuration; // @synthesize connectDuration=_connectDuration;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) unsigned short rtcType;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithGuid:(id)arg1 connectDuration:(id)arg2 connectionType:(unsigned int)arg3 linkQuality:(id)arg4 dualChannelState:(unsigned int)arg5 dnsTimeMilliSeconds:(id)arg6 tlsTimeMilliSeconds:(id)arg7;	// IMP=0x00100000000b98d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

