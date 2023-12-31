//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDVendorModelEntry, NSMutableSet;

__attribute__((visibility("hidden")))
@interface HMDVendorModelCollection : HMFObject
{
    HMDVendorModelEntry *_defaultEntry;	// 8 = 0x8
    NSMutableSet *_entries;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007b7ddc
@property(readonly, nonatomic) NSMutableSet *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) HMDVendorModelEntry *defaultEntry; // @synthesize defaultEntry=_defaultEntry;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007b7c59
- (id)lookupProductData:(id)arg1;	// IMP=0x00000000007b7b21
- (id)lookupModel:(id)arg1;	// IMP=0x00000000007b79b5
- (void)addEntry:(id)arg1;	// IMP=0x00000000007b794c
- (id)attributeDescriptions;	// IMP=0x00000000007b782e
- (id)init;	// IMP=0x00000000007b77c1

@end

