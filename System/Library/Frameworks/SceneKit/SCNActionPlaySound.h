//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionPlaySound : SCNAction
{
    struct SCNCPlaySound *_mycaction;	// 8 = 0x8
}

+ (id)playAudioSource:(id)arg1 waitForCompletion:(_Bool)arg2;	// IMP=0x0060000000097134
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000009712c
- (id)parameters;	// IMP=0x0000000000097238
- (id)reversedAction;	// IMP=0x000000000009721e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009719c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000970a0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000096f73
- (void)_setupDuration;	// IMP=0x0000000000096f27
- (id)init;	// IMP=0x0000000000096e72

@end
