//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UICellAccessoryConfiguration : NSObject
{
    _Bool _leadingAlwaysNeedsLayout;	// 8 = 0x8
    _Bool _trailingAlwaysNeedsLayout;	// 9 = 0x9
    NSArray *_leadingAccessories;	// 16 = 0x10
    NSArray *_trailingAccessories;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000102e56c
@property(copy, nonatomic) NSArray *trailingAccessories; // @synthesize trailingAccessories=_trailingAccessories;
@property(copy, nonatomic) NSArray *leadingAccessories; // @synthesize leadingAccessories=_leadingAccessories;
- (_Bool)alwaysNeedsLayout;	// IMP=0x000000000102e543
- (id)description;	// IMP=0x000000000102e22a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000102e033
- (id)init;	// IMP=0x000000000102dfd0

@end

