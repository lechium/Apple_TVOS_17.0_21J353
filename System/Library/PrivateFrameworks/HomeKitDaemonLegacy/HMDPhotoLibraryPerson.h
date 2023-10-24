//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDPhotoLibraryPerson : HMFObject
{
    NSUUID *_UUID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003629c8
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x000000000036283d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000362832
- (unsigned long long)hash;	// IMP=0x00000000003627ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003626b0
- (void)updateHMPerson:(id)arg1;	// IMP=0x0000000000362610
- (id)createHMPerson;	// IMP=0x0000000000362584
- (id)initWithUUID:(id)arg1 name:(id)arg2;	// IMP=0x00000000003624a8
- (id)initWithHMPerson:(id)arg1;	// IMP=0x00000000003623dd

@end
