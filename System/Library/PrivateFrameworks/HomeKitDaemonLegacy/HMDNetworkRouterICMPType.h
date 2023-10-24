//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPProtocolVersion, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterICMPType : NSObject
{
    HMDNetworkRouterIPProtocolVersion *_protocol;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_typeValue;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004be23d
+ (id)typeFromICMPType:(id)arg1;	// IMP=0x001000000044b55e
- (void).cxx_destruct;	// IMP=0x00000000004be215
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *typeValue; // @synthesize typeValue=_typeValue;
@property(retain, nonatomic) HMDNetworkRouterIPProtocolVersion *protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004bdf23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004bde95
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004bdbcc
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004bd89a
- (id)initWithProtocol:(id)arg1 typeValue:(id)arg2;	// IMP=0x00000000004bd801
- (id)init;	// IMP=0x00000000004bd7d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

