//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SecMockAKS : NSObject
{
}

+ (void)updateOperationsUntilUnlock;	// IMP=0x002000000000d3b5
+ (void)setOperationsUntilUnlock:(int)arg1;	// IMP=0x001000000000d3a9
+ (id)popDecryptRefKeyFailure;	// IMP=0x001000000000d307
+ (void)resetDecryptRefKeyFailures;	// IMP=0x001000000000d2bf
+ (void)failNextDecryptRefKey:(id)arg1;	// IMP=0x001000000000d204
+ (void)unlockAllClasses;	// IMP=0x001000000000d194
+ (void)lockClassA_C;	// IMP=0x001000000000d124
+ (void)lockClassA;	// IMP=0x001000000000d0b4
+ (_Bool)useGenerationCount;	// IMP=0x001000000000d0ac
+ (_Bool)isSEPDown;	// IMP=0x001000000000d0a4
+ (_Bool)forceUnwrapKeyDecodeFailure;	// IMP=0x001000000000d09c
+ (_Bool)forceInvalidPersona;	// IMP=0x001000000000d094
+ (_Bool)isLocked:(int)arg1;	// IMP=0x001000000000cfbe
+ (void)reset;	// IMP=0x001000000000cf4e
+ (void)setKeybag_state:(unsigned int)arg1;	// IMP=0x001000000000cf42
+ (unsigned int)keybag_state;	// IMP=0x001000000000cf36
+ (id)mutabilityQueue;	// IMP=0x001000000000cf06
+ (MISSING_TYPE *)lockedStates;	// IMP=0x001000000000ceb9
+ (void)trapdoor;	// IMP=0x001000000000ce95

@end

