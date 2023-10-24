//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterCredential : NSObject
{
    NSData *_macAddress;	// 8 = 0x8
    NSData *_psk;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000057ed48
- (void).cxx_destruct;	// IMP=0x000000000057ed20
@property(retain, nonatomic) NSData *psk; // @synthesize psk=_psk;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000057ea2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000057e9a0
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000057e6d7
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000057e3a5
- (id)initWithMacAddress:(id)arg1 psk:(id)arg2;	// IMP=0x000000000057e30c
- (id)init;	// IMP=0x000000000057e2dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
