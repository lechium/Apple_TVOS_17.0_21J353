//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSLazyPropertyList.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _LSAggregatePropertyList : _LSLazyPropertyList
{
    NSArray *_plists;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e6c76
- (void).cxx_destruct;	// IMP=0x00000000000e6dc2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e6d01
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e6c7e
- (void)prewarm;	// IMP=0x00000000000e6b2b
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;	// IMP=0x00000000000e695b
- (_Bool)_getPropertyList:(id *)arg1;	// IMP=0x00000000000e6756
- (id)initWithLazyPropertyLists:(id)arg1;	// IMP=0x00000000000e66b0

@end
