//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCAutoPlayEnumerationResult : NSObject
{
    NSString *_sectionIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000019cff8
@property(readonly, nonatomic, getter=isRemoved) _Bool removed;
@property(readonly, nonatomic) NSString *itemIdentifier;
@property(readonly, nonatomic) NSString *sectionIdentifier;
- (id)trackingEntryResult;	// IMP=0x000000000019cfcd
- (id)itemResult;	// IMP=0x000000000019cfc4
@property(readonly, nonatomic) long long entryType;
@property(readonly, nonatomic) long long branchDepth;
- (id)initWithSectionIdentifier:(id)arg1;	// IMP=0x000000000019cf3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

