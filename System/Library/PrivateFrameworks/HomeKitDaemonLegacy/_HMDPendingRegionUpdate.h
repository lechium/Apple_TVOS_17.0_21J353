//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMDPendingRegionUpdate : HMFObject
{
    long long _state;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000009ba46e
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)attributeDescriptions;	// IMP=0x00000000009ba378

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

