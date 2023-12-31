//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILayoutGuide.h"

@class NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface _UIWindowSafeAreaAspectFitLayoutGuide : UILayoutGuide
{
    _Bool _layoutFrameDirty;	// 64 = 0x40
    NSLayoutConstraint *_leftConstraint;	// 72 = 0x48
    NSLayoutConstraint *_topConstraint;	// 80 = 0x50
    NSLayoutConstraint *_widthConstraint;	// 88 = 0x58
    NSLayoutConstraint *_heightConstraint;	// 96 = 0x60
    double _aspectRatio;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000143e52b
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (_Bool)_isSafeAreaAspectFitLayoutGuide;	// IMP=0x000000000143e511
- (void)_updateLayoutFrameConstraintsIfNeededWithOwningView:(id)arg1;	// IMP=0x000000000143e0dc
- (void)_createOrUpdateHeightConstraintWithConstant:(double)arg1 owningView:(id)arg2 constraintsToActivate:(id)arg3;	// IMP=0x000000000143dfd9
- (void)_createOrUpdateWidthConstraintWithConstant:(double)arg1 owningView:(id)arg2 constraintsToActivate:(id)arg3;	// IMP=0x000000000143ded6
- (void)_createOrUpdateTopConstraintWithConstant:(double)arg1 owningView:(id)arg2 constraintsToActivate:(id)arg3;	// IMP=0x000000000143dda2
- (void)_createOrUpdateLeftConstraintWithConstant:(double)arg1 owningView:(id)arg2 constraintsToActivate:(id)arg3;	// IMP=0x000000000143dc6e
- (void)_updateLayoutFrameInOwningView:(id)arg1 fromEngine:(id)arg2;	// IMP=0x000000000143dbd6
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(_Bool)arg2;	// IMP=0x000000000143da6d
- (void)dealloc;	// IMP=0x000000000143d9ff
- (void)_setOwningView:(id)arg1;	// IMP=0x000000000143d986
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000143d903
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000143d87f
- (id)init;	// IMP=0x000000000143d836

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

