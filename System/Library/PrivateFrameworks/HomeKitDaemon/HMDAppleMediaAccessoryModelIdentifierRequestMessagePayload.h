//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryModelIdentifierRequestMessagePayload : HMFObject
{
    NSString *_accessoryIdentifier;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000005f2e18
+ (id)messageName;	// IMP=0x00100000005f2e0b
- (void).cxx_destruct;	// IMP=0x00000000005f2df8
@property(readonly, copy) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005f2cc3
- (id)attributeDescriptions;	// IMP=0x00000000005f2bf7
- (id)payloadCopy;	// IMP=0x00000000005f2b53
- (id)initWithPayload:(id)arg1;	// IMP=0x00000000005f29f7
- (id)initWithAccessoryIdentifier:(id)arg1;	// IMP=0x00000000005f2978

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

