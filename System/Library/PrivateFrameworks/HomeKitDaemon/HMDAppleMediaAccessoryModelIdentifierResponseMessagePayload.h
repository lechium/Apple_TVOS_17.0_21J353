//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryModelIdentifierResponseMessagePayload : HMFObject
{
    NSUUID *_modelIdentifier;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000004aeb8f
- (void).cxx_destruct;	// IMP=0x00000000004aeb7c
@property(readonly, copy) NSUUID *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004aea47
- (id)attributeDescriptions;	// IMP=0x00000000004ae97b
- (id)payloadCopy;	// IMP=0x00000000004ae8b1
- (id)initWithPayload:(id)arg1;	// IMP=0x00000000004ae755
- (id)initWithModelIdentifier:(id)arg1;	// IMP=0x00000000004ae6d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

