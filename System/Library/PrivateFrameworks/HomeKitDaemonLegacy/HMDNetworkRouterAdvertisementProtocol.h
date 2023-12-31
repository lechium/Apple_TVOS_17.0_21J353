//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterAdvertisementProtocol : NSObject
{
    long long _advertisementProtocol;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004b3c19
+ (id)protocolFromFirewallRuleAdvertisingProtocol:(unsigned char)arg1;	// IMP=0x001000000044c0cf
@property(nonatomic) long long advertisementProtocol; // @synthesize advertisementProtocol=_advertisementProtocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b3ac2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b3a71
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004b3a57
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004b3905
- (id)initWithAdvertisementProtocol:(long long)arg1;	// IMP=0x00000000004b38c8
- (id)init;	// IMP=0x00000000004b388c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

