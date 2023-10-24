//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMRemoteLoginMessage.h>

@class AKDevice, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginProxyDeviceResponse : HMRemoteLoginMessage
{
    AKDevice *_proxyDevice;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x00100000003e43ce
+ (id)messageName;	// IMP=0x00100000003e43c1
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000003e43b9
+ (id)objWithMessage:(id)arg1;	// IMP=0x00100000003e4222
+ (id)objWithDict:(id)arg1;	// IMP=0x00100000003e40a9
- (void).cxx_destruct;	// IMP=0x00000000003e4096
@property(retain, nonatomic) AKDevice *proxyDevice; // @synthesize proxyDevice=_proxyDevice;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003e3fd6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003e3f3b
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
