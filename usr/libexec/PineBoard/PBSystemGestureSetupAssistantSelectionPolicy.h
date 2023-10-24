//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSIntegerSet, NSString;

@interface PBSystemGestureSetupAssistantSelectionPolicy : NSObject
{
    BSIntegerSet *_allowedSystemGestures;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000094f90
@property(readonly, nonatomic) BSIntegerSet *allowedSystemGestures; // @synthesize allowedSystemGestures=_allowedSystemGestures;
- (_Bool)_isSystemGestureRecipeAllowed:(id)arg1;	// IMP=0x0010000000094f52
- (id)_findFirstAllowedSystemGestureRecipe:(id)arg1;	// IMP=0x0010000000094eab
- (id)selectSystemGestureUsingActiveRecipeEnumerator:(id)arg1;	// IMP=0x0010000000094c56
@property(readonly, nonatomic) _Bool performsSelectiveFiltering;
- (id)init;	// IMP=0x0010000000094b5a
- (id)initWithAllowedSystemGestureTypes:(id)arg1;	// IMP=0x00100000000949bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
