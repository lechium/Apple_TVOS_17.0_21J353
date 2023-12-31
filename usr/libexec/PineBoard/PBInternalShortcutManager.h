//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PBSystemGestureHandle;

@interface PBInternalShortcutManager : NSObject
{
    NSMutableDictionary *_handlers;	// 8 = 0x8
    PBSystemGestureHandle *_executeShortcutGesture;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000000adb2b
+ (id)dependencyDescription;	// IMP=0x00100000000ada1d
- (void).cxx_destruct;	// IMP=0x00200000000ae393
@property(readonly, nonatomic) PBSystemGestureHandle *executeShortcutGesture; // @synthesize executeShortcutGesture=_executeShortcutGesture;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (void)_updateSystemGestureWithManager:(id)arg1;	// IMP=0x00100000000ae212
- (void)executeShortcut;	// IMP=0x00100000000ae098
- (void)registerWithOption:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000adf58
@property(readonly, nonatomic) long long currentOption;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000addbc
- (void)dealloc;	// IMP=0x00100000000add32
- (id)init;	// IMP=0x00100000000adbb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

