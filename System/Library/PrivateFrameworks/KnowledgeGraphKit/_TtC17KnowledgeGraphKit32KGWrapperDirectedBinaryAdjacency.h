//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KGElementIdentifierSet, MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency : NSObject
{
    MISSING_TYPE *wrappedValue;	// 8 = 0x8
}

+ (id)identityWith:(id)arg1;	// IMP=0x00600000000218d0
- (void).cxx_destruct;	// IMP=0x0000000000022b80
- (id)mutableCopy;	// IMP=0x0000000000022ae0
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000022940
- (id)targetsWithMinimumCount:(unsigned long long)arg1;	// IMP=0x0000000000022850
- (id)unionWith:(id)arg1;	// IMP=0x00000000000226b0
- (id)differenceWith:(id)arg1;	// IMP=0x0000000000022630
- (id)transposed;	// IMP=0x0000000000022500
- (id)targetsForSourceIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000224c0
- (id)targetsForSources:(id)arg1;	// IMP=0x0000000000022380
- (_Bool)containsSource:(unsigned long long)arg1 target:(unsigned long long)arg2;	// IMP=0x00000000000221b0
- (void)enumerateTargetsBySourceWith:(CDUnknownBlockType)arg1;	// IMP=0x00000000000220e0
- (id)joinOnTargetsOfAdjacency:(id)arg1;	// IMP=0x0000000000022010
- (id)subtractingSourcesWith:(id)arg1;	// IMP=0x0000000000021ff0
- (id)subtractingTargetsWith:(id)arg1;	// IMP=0x0000000000021e90
- (id)intersectingSourcesWith:(id)arg1;	// IMP=0x0000000000021d10
- (id)intersectingTargetsWith:(id)arg1;	// IMP=0x0000000000021bc0
@property(nonatomic, readonly) long long sourcesCount;
@property(nonatomic, readonly) KGElementIdentifierSet *targets;
@property(nonatomic, readonly) KGElementIdentifierSet *sources;
- (id)init;	// IMP=0x0000000000021880

@end
