//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBGestureRecognizerDescriptor : NSObject
{
    unsigned long long _hash;	// 8 = 0x8
}

@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000914c4
@property(readonly) unsigned long long hash;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000091400
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000913af
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000091359
- (id)succinctDescription;	// IMP=0x0010000000091308
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000912fc
@property(readonly, nonatomic) unsigned long long type;
- (void)appendDescriptionToBuilder:(id)arg1;	// IMP=0x00100000000912ee
- (id)hashBuilder;	// IMP=0x0010000000091286
- (_Bool)isTypeOf:(unsigned long long)arg1;	// IMP=0x0010000000091260
- (id)init;	// IMP=0x0010000000091224
- (void)applySettingsToGestureRecognizer:(id)arg1;	// IMP=0x0010000000091591
- (id)systemGestureRecognizerDescriptorWithActivationMask:(unsigned long long)arg1;	// IMP=0x00100000000ae7fb
@property(readonly, nonatomic) double _minimumPressDuration;
@property(readonly, nonatomic) unsigned long long _numberOfPressBeganRequired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

