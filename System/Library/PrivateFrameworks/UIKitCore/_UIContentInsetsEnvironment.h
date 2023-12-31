//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIContentInsetsEnvironment : NSObject
{
    long long _insetReference;	// 8 = 0x8
    struct NSDirectionalEdgeInsets _safeAreaInsets;	// 16 = 0x10
    struct NSDirectionalEdgeInsets _layoutMarginsInsets;	// 48 = 0x30
    struct NSDirectionalEdgeInsets _readableContentInsets;	// 80 = 0x50
}

+ (id)insetEnvironmentForInsetReference:(long long)arg1 safeAreaInsets:(struct NSDirectionalEdgeInsets)arg2 layoutMarginsInsets:(struct NSDirectionalEdgeInsets)arg3 readableContentInsets:(struct NSDirectionalEdgeInsets)arg4;	// IMP=0x0010000000318380
+ (id)nullEnvironment;	// IMP=0x00100000003182b3
+ (id)insetEnvironmentFromParentEnvironment:(id)arg1 insetReference:(long long)arg2;	// IMP=0x00100000003181b8
+ (id)insetEnvironmentForView:(id)arg1 insetReference:(long long)arg2;	// IMP=0x0010000000318077
@property(nonatomic) struct NSDirectionalEdgeInsets readableContentInsets; // @synthesize readableContentInsets=_readableContentInsets;
@property(nonatomic) struct NSDirectionalEdgeInsets layoutMarginsInsets; // @synthesize layoutMarginsInsets=_layoutMarginsInsets;
@property(nonatomic) struct NSDirectionalEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(nonatomic) long long insetReference; // @synthesize insetReference=_insetReference;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000318b2d
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets effectiveInsets;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003186af
- (id)layoutContainerForInsetReference:(long long)arg1 containerSize:(struct CGSize)arg2 layoutAxis:(unsigned long long)arg3;	// IMP=0x0000000000318645
- (id)layoutContainerForContainerSize:(struct CGSize)arg1 layoutAxis:(unsigned long long)arg2;	// IMP=0x00000000003183e7
- (id)initWithInsetReference:(long long)arg1 safeAreaInsets:(struct NSDirectionalEdgeInsets)arg2 layoutMarginsInsets:(struct NSDirectionalEdgeInsets)arg3 readableContentInsets:(struct NSDirectionalEdgeInsets)arg4;	// IMP=0x0000000000318001

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

