//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject;
@protocol OS_dispatch_queue, VOTElementRotorDelegate><VOTCustomActionContext;

@interface VOTElementRotor
{
    NSArray *_enabledWebRotorItems;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_enabledWebRotorItemsQueue;	// 88 = 0x58
    _Bool _showsWebSearchResults;	// 96 = 0x60
    long long _temporaryRotorTypeNeedingPromotion;	// 104 = 0x68
    _Bool _ignoreDefaultTypeAutofill;	// 112 = 0x70
    CDUnknownBlockType _updatedWebRotorItemsCallback;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000c88b9
@property(copy, nonatomic) CDUnknownBlockType updatedWebRotorItemsCallback; // @synthesize updatedWebRotorItemsCallback=_updatedWebRotorItemsCallback;
@property(nonatomic) _Bool ignoreDefaultTypeAutofill; // @synthesize ignoreDefaultTypeAutofill=_ignoreDefaultTypeAutofill;
@property(nonatomic) _Bool showsWebSearchResults; // @synthesize showsWebSearchResults=_showsWebSearchResults;
- (_Bool)customActionsAreDragDrop:(id)arg1;	// IMP=0x00100000000c884f
- (_Bool)customActionsAreValid:(id)arg1;	// IMP=0x00100000000c85b7
- (void)updateRotorForElement:(id)arg1 shouldPreserveRotorNavigation:(_Bool)arg2 firstResponder:(id)arg3;	// IMP=0x00100000000c5720
- (void)updateRotorForElement:(id)arg1 shouldPreserveRotorNavigation:(_Bool)arg2;	// IMP=0x00100000000c570b
- (_Bool)rotorTypeIsValid:(long long)arg1 eventOrigin:(long long)arg2;	// IMP=0x00100000000c541e
- (void)nanoUpdateRotorForElement:(id)arg1;	// IMP=0x00100000000c4f50
- (void)_promoteGesturedTextInputRotorIfNeeded;	// IMP=0x00100000000c4f4a
- (id)_currentEnabledWebRotorItems;	// IMP=0x00100000000c4e3d
- (void)_updateWebRotorItems;	// IMP=0x00100000000c4a45
- (_Bool)_customPublicRotorInRotor:(id)arg1;	// IMP=0x00100000000c483a
- (long long)_firstNonGesturedTextInputRotorTypeWithFallback:(long long)arg1;	// IMP=0x00100000000c4603
- (void)dealloc;	// IMP=0x00100000000c45b9
- (id)init;	// IMP=0x00100000000c439c

// Remaining properties
@property(nonatomic) __weak id <VOTElementRotorDelegate><VOTCustomActionContext> delegate; // @dynamic delegate;

@end

