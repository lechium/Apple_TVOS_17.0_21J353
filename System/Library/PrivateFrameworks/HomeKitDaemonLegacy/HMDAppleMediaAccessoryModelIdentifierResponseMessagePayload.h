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

+ (id)logCategory;	// IMP=0x0010000000415f77
- (void).cxx_destruct;	// IMP=0x0000000000415f64
@property(readonly, copy) NSUUID *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000415e2f
- (id)attributeDescriptions;	// IMP=0x0000000000415d63
- (id)payloadCopy;	// IMP=0x0000000000415c99
- (id)initWithPayload:(id)arg1;	// IMP=0x0000000000415b3d
- (id)initWithModelIdentifier:(id)arg1;	// IMP=0x0000000000415abe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

