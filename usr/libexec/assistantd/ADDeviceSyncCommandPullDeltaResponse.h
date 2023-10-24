//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ADDeviceSyncCommandPullDeltaResponse : NSObject
{
    NSArray *_incrementalChanges;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000b6b03
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b6ab6
- (void).cxx_destruct;	// IMP=0x00200000000b6994
@property(readonly, copy, nonatomic) NSArray *incrementalChanges; // @synthesize incrementalChanges=_incrementalChanges;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000b6967
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000b689c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b6891
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b67ee
- (unsigned long long)hash;	// IMP=0x00100000000b67d8
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000b6752
- (id)description;	// IMP=0x00100000000b673e
- (id)initWithIncrementalChanges:(id)arg1;	// IMP=0x00100000000b66a8
- (id)init;	// IMP=0x00100000000b6694
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b65a1
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b6b0b

@end
