//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface SHLLibraryBatch : NSObject
{
    NSSet *_insertions;	// 8 = 0x8
    NSSet *_deletions;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002f2e2
- (void).cxx_destruct;	// IMP=0x002000000002f912
@property(readonly, nonatomic) NSSet *deletions; // @synthesize deletions=_deletions;
@property(readonly, nonatomic) NSSet *insertions; // @synthesize insertions=_insertions;
@property(readonly, nonatomic) long long numberOfItems;
@property(readonly, nonatomic, getter=hasChanges) _Bool changes;
- (id)subdivideIntoBatchesOfSize:(long long)arg1;	// IMP=0x001000000002f454
- (id)differenceOfBatch:(id)arg1;	// IMP=0x001000000002f2ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002f275
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002f11f
- (id)initWithInsertions:(id)arg1 deletions:(id)arg2;	// IMP=0x001000000002f086

@end

