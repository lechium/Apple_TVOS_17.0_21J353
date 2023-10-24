//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BLSHOSInterfaceProviderAbortContext : NSObject
{
    unsigned long long _watchdogType;	// 8 = 0x8
    long long _cbDisplayMode;	// 16 = 0x10
    long long _cbFlipbookState;	// 24 = 0x18
    _Bool _suppressionServiceActive;	// 32 = 0x20
    _Bool _caFlipbookEnabled;	// 33 = 0x21
    _Bool _caFlipbookSuppressed;	// 34 = 0x22
    _Bool _caBlanked;	// 35 = 0x23
    _Bool _flipbookTransparent;	// 36 = 0x24
    _Bool _deviceSupportsAlwaysOn;	// 37 = 0x25
    _Bool _kernelSpecialMode;	// 38 = 0x26
    _Bool _displayStateClientSupported;	// 39 = 0x27
    float _backlightDimmedFactor;	// 40 = 0x28
    unsigned long long _abortReason;	// 48 = 0x30
}

@property(readonly, nonatomic) unsigned long long abortReason; // @synthesize abortReason=_abortReason;
@property(readonly, copy) NSString *description;
- (void)setSleepImminentAbortReason;	// IMP=0x0000000000003ba4
@property(readonly, nonatomic) _Bool wantsWaitPastFireForCompletionAndTailspin;
@property(readonly, nonatomic) _Bool wantsPanic;
@property(readonly, copy, nonatomic) NSString *abortReasonString;
- (id)initWithWatchdogType:(unsigned long long)arg1 cbDisplayMode:(long long)arg2 cbFlipbookState:(long long)arg3 suppressionServiceActive:(_Bool)arg4 caFlipbookEnabled:(_Bool)arg5 caFlipbookSuppressed:(_Bool)arg6 caBlanked:(_Bool)arg7 flipbookTransparent:(_Bool)arg8 deviceSupportsAlwaysOn:(_Bool)arg9 kernelSpecialMode:(_Bool)arg10 displayStateClientSupported:(_Bool)arg11 backlightDimmedFactor:(float)arg12;	// IMP=0x0000000000003929

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool hasEnsureFlipbookCurrent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) const void *payload;
@property(readonly, nonatomic) unsigned int payloadSize;
@property(readonly) Class superclass;

@end

