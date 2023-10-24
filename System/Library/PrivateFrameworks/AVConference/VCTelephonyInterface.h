//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VCTelephonyInterfaceDelegate;

__attribute__((visibility("hidden")))
@interface VCTelephonyInterface : NSObject
{
    id _delegate;	// 8 = 0x8
}

- (void)notifyCodecModeChangeEventToCT:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x0000000000451388
- (id)translateVocoderTypeToCoreAudioType:(id)arg1;	// IMP=0x0000000000451356
- (void)handleVocoderNotificationWithInfo:(id)arg1;	// IMP=0x0000000000451350
- (void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2;	// IMP=0x000000000045134a
- (void)queryAnbrBitrateRecommendation:(unsigned int)arg1 direction:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000451344
- (void)getAnbrActivationStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000045133e
@property id <VCTelephonyInterfaceDelegate> delegate;
- (void)unregisterForNotifications;	// IMP=0x0000000000451319
- (_Bool)registerForNotifications;	// IMP=0x0000000000451311
- (void)setupVCMediaStreamRateAdaptationConfig:(struct tagVCMediaStreamRateAdaptationConfig *)arg1;	// IMP=0x0000000000451049
- (unsigned int)validateCarrierBundleConfigParameters:(id)arg1 forKey:(id)arg2 defaultValue:(unsigned int)arg3 minValue:(unsigned int)arg4 maxValue:(unsigned int)arg5;	// IMP=0x0000000000450e67
- (_Bool)getCarrierBundleValue:(id *)arg1 forKey:(id)arg2;	// IMP=0x0000000000450e5f
- (void)dealloc;	// IMP=0x0000000000450e0d
- (id)initWithTelephonySubscriptionSlot:(long long)arg1;	// IMP=0x0000000000450dfb
- (id)init;	// IMP=0x0000000000450df3

@end
