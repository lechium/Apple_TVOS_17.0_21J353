//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSAPSUserPayload : NSObject
{
    NSMutableDictionary *_payload;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e82a9
@property(retain, nonatomic) NSMutableDictionary *payload; // @synthesize payload=_payload;
- (void)logDiffBetween:(id)arg1 andTarget:(id)arg2 withKeyPath:(id)arg3;	// IMP=0x00000000000e7a2a
- (void)logHeaderDiffAgainstSource:(id)arg1;	// IMP=0x00000000000e78ed
- (id)extractMadridProtocolPayloadFrom:(id)arg1;	// IMP=0x00000000000e78d4
- (id)extractQuickRelaySelfAllocTokenFrom:(id)arg1;	// IMP=0x00000000000e78bb
- (id)extractQuickRelayAllocationStatusFrom:(id)arg1;	// IMP=0x00000000000e78a2
- (id)extractMadridDeliveryContextFrom:(id)arg1;	// IMP=0x00000000000e7889
- (id)extractMadridHttpHeadersFrom:(id)arg1;	// IMP=0x00000000000e7870
- (id)extractCommandWebTunnelResponseFrom:(id)arg1;	// IMP=0x00000000000e7857
- (id)extractCommandResponseFrom:(id)arg1;	// IMP=0x00000000000e783e
- (id)initWithBlastDoorObject:(id)arg1;	// IMP=0x00000000000e7754

@end

