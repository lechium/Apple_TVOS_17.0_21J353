//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISheetPresentationControllerClientConfiguration : NSObject
{
    _Bool _containsFirstResponder;	// 8 = 0x8
    _Bool _firstResponderRequiresKeyboard;	// 9 = 0x9
    double _proposedDepthLevel;	// 16 = 0x10
    struct CGRect _keyboardFrame;	// 24 = 0x18
}

+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0010000001102f94
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000001102f8c
@property(nonatomic) double proposedDepthLevel; // @synthesize proposedDepthLevel=_proposedDepthLevel;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(nonatomic) _Bool firstResponderRequiresKeyboard; // @synthesize firstResponderRequiresKeyboard=_firstResponderRequiresKeyboard;
@property(nonatomic) _Bool containsFirstResponder; // @synthesize containsFirstResponder=_containsFirstResponder;
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0000000001102e72
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000001102d54
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0000000001102c10
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001102acc
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011027f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
