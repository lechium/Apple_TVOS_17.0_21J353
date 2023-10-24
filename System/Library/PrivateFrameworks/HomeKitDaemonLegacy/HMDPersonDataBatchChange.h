//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalZoneLocalInput, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDPersonDataBatchChange : HMFObject
{
    NSUUID *_UUID;	// 8 = 0x8
    HMBLocalZoneLocalInput *_localInput;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000835774
- (void).cxx_destruct;	// IMP=0x0000000000835743
@property(readonly) HMBLocalZoneLocalInput *localInput; // @synthesize localInput=_localInput;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x000000000083564b
- (id)logIdentifier;	// IMP=0x00000000008355fb
- (void)commit;	// IMP=0x000000000083538a
- (void)removeFaceCropWithUUID:(id)arg1;	// IMP=0x0000000000835264
- (void)removePersonWithUUID:(id)arg1;	// IMP=0x000000000083513e
- (void)addOrUpdateFaceCrop:(id)arg1;	// IMP=0x0000000000834f8c
- (void)addOrUpdatePerson:(id)arg1;	// IMP=0x0000000000834e3d
- (id)initWithLocalInput:(id)arg1;	// IMP=0x0000000000834d89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
