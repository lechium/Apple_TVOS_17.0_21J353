//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessCodeManagerUtilities : HMFObject
{
}

+ (id)logCategory;	// IMP=0x00100000000411fa
+ (_Bool)allModificationRequests:(id)arg1 areAddingAccessCode:(id)arg2;	// IMP=0x0010000000041166
+ (_Bool)anyModificationFailed:(id)arg1;	// IMP=0x001000000004114a
+ (id)filteredFetchResponses:(id)arg1 forUser:(id)arg2;	// IMP=0x0010000000040ecd
+ (id)removedAccessoryAccessCodesFromModificationResponses:(id)arg1;	// IMP=0x0010000000040eb1
+ (id)updatedAccessoryAccessCodesFromModificationResponses:(id)arg1;	// IMP=0x0010000000040e95
+ (id)addedAccessoryAccessCodesFromModificationResponses:(id)arg1;	// IMP=0x0010000000040e79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

