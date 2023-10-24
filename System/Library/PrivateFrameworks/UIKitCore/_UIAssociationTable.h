//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIAssociationTable : NSObject
{
    NSMapTable *_leftToRightHashTables;	// 8 = 0x8
    NSMapTable *_rightToLeftHashTables;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001243dc1
- (_Bool)hasRightValuesForLeftValue:(id)arg1;	// IMP=0x0000000001243d8a
- (_Bool)hasLeftValuesForRightValue:(id)arg1;	// IMP=0x0000000001243d53
- (id)rightValueEnumerableForLeftValue:(id)arg1;	// IMP=0x0000000001243d3d
- (id)leftValueEnumerableForRightValue:(id)arg1;	// IMP=0x0000000001243d27
- (id)rightValuesForLeftValue:(id)arg1;	// IMP=0x0000000001243cae
- (id)leftValuesForRightValue:(id)arg1;	// IMP=0x0000000001243c35
- (id)rightValueEnumerable;	// IMP=0x0000000001243c27
- (id)leftValueEnumerable;	// IMP=0x0000000001243c19
- (id)rightValues;	// IMP=0x0000000001243c0b
- (id)leftValues;	// IMP=0x0000000001243bfd
- (_Bool)isEmpty;	// IMP=0x0000000001243be0
- (void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;	// IMP=0x0000000001243aae
- (void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;	// IMP=0x000000000124396f
- (id)description;	// IMP=0x00000000012438f2
- (id)initWithLeftValueOptions:(unsigned long long)arg1 rightValueOptions:(unsigned long long)arg2;	// IMP=0x000000000124381d

@end
