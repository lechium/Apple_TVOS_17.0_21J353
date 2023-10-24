//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VUIUpNextButtonProperties;

__attribute__((visibility("hidden")))
@interface VUIUpNextButton
{
    VUIUpNextButtonProperties *_properties;	// 8 = 0x8
    CDUnknownBlockType _stateDidChangeHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000018545
@property(copy, nonatomic) CDUnknownBlockType stateDidChangeHandler; // @synthesize stateDidChangeHandler=_stateDidChangeHandler;
@property(retain, nonatomic) VUIUpNextButtonProperties *properties; // @synthesize properties=_properties;
- (void)updateAccessibilityIdentifierAfterStateChanged;	// IMP=0x0000000000018435
- (void)upNextStateChangedToRemoved;	// IMP=0x00000000000180f5
- (void)upNextStateChangedToAdded;	// IMP=0x0000000000017db5
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000017d93
- (void)selectButtonAction:(id)arg1;	// IMP=0x0000000000017ce9
- (id)initWithType:(unsigned long long)arg1 interfaceStyle:(unsigned long long)arg2;	// IMP=0x0000000000017b14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

