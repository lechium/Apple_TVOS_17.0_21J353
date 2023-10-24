//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SASRequestOptions, SRModeSystemState;

@interface SRModeProvider : NSObject
{
    SRModeSystemState *_systemState;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000282a0
- (unsigned long long)internalModeOverride;	// IMP=0x0010000000028103
- (void)_setSystemState:(id)arg1;	// IMP=0x00100000000280f2
@property(retain, nonatomic) SASRequestOptions *requestOptions;
@property(nonatomic) _Bool userTouchedSnippet;
- (_Bool)displayOnlyModeForInterstitialsAndErrors;	// IMP=0x0010000000027d4a
- (unsigned long long)_modeForSiriSettings;	// IMP=0x0010000000027c94
- (unsigned long long)currentMode;	// IMP=0x00100000000279f5
- (id)init;	// IMP=0x001000000002799f

@end
