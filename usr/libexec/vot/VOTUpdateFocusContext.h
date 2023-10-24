//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VOTAppTransitionContext, VOTElement;

@interface VOTUpdateFocusContext : NSObject
{
    _Bool _shouldIgnorePreviousFocusedElement;	// 8 = 0x8
    _Bool _senderIsAppExtension;	// 9 = 0x9
    int _senderPID;	// 12 = 0xc
    VOTElement *_focusElement;	// 16 = 0x10
    long long _reason;	// 24 = 0x18
    VOTAppTransitionContext *_appTransition;	// 32 = 0x20
    CDUnknownBlockType _updateFocusComplete;	// 40 = 0x28
    NSString *_senderBundleID;	// 48 = 0x30
}

+ (id)context:(long long)arg1;	// IMP=0x0040000000011e68
- (void).cxx_destruct;	// IMP=0x00200000000120ee
@property(nonatomic) _Bool senderIsAppExtension; // @synthesize senderIsAppExtension=_senderIsAppExtension;
@property(copy, nonatomic) NSString *senderBundleID; // @synthesize senderBundleID=_senderBundleID;
@property(nonatomic) int senderPID; // @synthesize senderPID=_senderPID;
@property(copy, nonatomic) CDUnknownBlockType updateFocusComplete; // @synthesize updateFocusComplete=_updateFocusComplete;
@property(retain, nonatomic) VOTAppTransitionContext *appTransition; // @synthesize appTransition=_appTransition;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(retain, nonatomic) VOTElement *focusElement; // @synthesize focusElement=_focusElement;
@property(nonatomic) _Bool shouldIgnorePreviousFocusedElement; // @synthesize shouldIgnorePreviousFocusedElement=_shouldIgnorePreviousFocusedElement;
- (id)description;	// IMP=0x0010000000011edb
- (id)init;	// IMP=0x0010000000011ea0

@end

