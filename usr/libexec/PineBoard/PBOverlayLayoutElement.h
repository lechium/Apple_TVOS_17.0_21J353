//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBOverlayLayoutController, PBSOverlayLayoutElementHint, PBSOverlayLayoutElementIdentifier;

@interface PBOverlayLayoutElement : NSObject
{
    PBSOverlayLayoutElementIdentifier *_identifier;	// 8 = 0x8
    PBOverlayLayoutController *_controller;	// 16 = 0x10
    long long _layoutLevel;	// 24 = 0x18
    struct CGVector _stickiness;	// 32 = 0x20
    struct CGVector _offset;	// 48 = 0x30
    struct CGSize _symmetricalMargin;	// 64 = 0x40
    struct CGRect _frame;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000197848
@property(readonly, nonatomic) struct CGSize symmetricalMargin; // @synthesize symmetricalMargin=_symmetricalMargin;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) struct CGVector offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) struct CGVector stickiness; // @synthesize stickiness=_stickiness;
@property(readonly, nonatomic) __weak PBOverlayLayoutController *controller; // @synthesize controller=_controller;
@property(readonly, copy, nonatomic) PBSOverlayLayoutElementIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)stateDumpBuilder;	// IMP=0x0010000000197659
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000019747c
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000019742b
- (id)succinctDescriptionBuilder;	// IMP=0x00100000001973aa
- (id)succinctDescription;	// IMP=0x0010000000197359
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000197312
- (id);	// IMP=0x00100000001972ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000196d00
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PBSOverlayLayoutElementHint *hint;
@property(readonly, nonatomic, getter=isFixed) _Bool fixed;
@property(readonly, nonatomic) struct CGRect repositionedPaddedFrame;
@property(readonly, nonatomic) struct CGRect unpaddedFrame;
@property(readonly, nonatomic) struct CGRect paddedFrame;
- (id)initWithElement:(id)arg1;	// IMP=0x001000000019693e
- (id)initWithElement:(id)arg1 controller:(id)arg2;	// IMP=0x00100000001967de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

