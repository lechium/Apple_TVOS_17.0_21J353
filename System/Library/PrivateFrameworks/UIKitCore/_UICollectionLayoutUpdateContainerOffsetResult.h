//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutUpdateContainerOffsetResult : NSObject
{
    NSMutableDictionary *_invalidatedSupplementaryIndexesDict;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000030dcf9
- (void)addInvalidatedSupplementaryForKind:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000030db87
- (id)indexPathsForInvalidatedSupplementariesOfKind:(id)arg1;	// IMP=0x000000000030daac
@property(readonly, nonatomic) NSSet *invalidatedAuxillaryKinds;
- (id)init;	// IMP=0x000000000030d9ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

