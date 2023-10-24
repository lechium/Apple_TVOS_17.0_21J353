//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDefaultHapticDeviceCapability : NSObject
{
    _Bool _supportsHaptics;	// 8 = 0x8
    _Bool _supportsAudio;	// 9 = 0x9
}

- (id)attributesForDynamicParameter:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005c84
- (id)attributesForEventParameter:(id)arg1 eventType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000005a45
- (float)defaultValueForDynamicParameter:(id)arg1;	// IMP=0x0000000000005847
- (float)minimumValueForDynamicParameter:(id)arg1;	// IMP=0x0000000000005649
- (float)maximumValueForDynamicParameter:(id)arg1;	// IMP=0x0000000000005452
- (float)defaultValueForEventParameter:(id)arg1 eventType:(id)arg2;	// IMP=0x00000000000051bc
- (float)minimumValueForEventParameter:(id)arg1;	// IMP=0x0000000000004fe5
- (float)maximumValueForEventParameter:(id)arg1;	// IMP=0x0000000000004e15
@property(readonly) unsigned long long maximumNumberOfAudioChannels;
@property(readonly) unsigned long long maximumNumberOfHapticChannels;
@property(readonly) _Bool supportsAudio;
@property(readonly) _Bool supportsHaptics;
- (id)initPrivate;	// IMP=0x0000000000004d5d
- (id)init;	// IMP=0x0000000000004d4f

@end

