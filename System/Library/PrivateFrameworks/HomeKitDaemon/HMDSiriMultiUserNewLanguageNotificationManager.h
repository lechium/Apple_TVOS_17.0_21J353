//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSiriMultiUserNewLanguageNotificationManagerContext, NSString;

__attribute__((visibility("hidden")))
@interface HMDSiriMultiUserNewLanguageNotificationManager : HMFObject
{
    HMDSiriMultiUserNewLanguageNotificationManagerContext *_context;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000001b751a
- (void).cxx_destruct;	// IMP=0x00000000001b737c
@property(readonly) HMDSiriMultiUserNewLanguageNotificationManagerContext *context; // @synthesize context=_context;
- (void)_postNotificationIfNecessaryForMediaAccessory:(id)arg1;	// IMP=0x00000000001b694e
- (void)mediaAccessory:(id)arg1 didUpdateSoftwareToVersion:(id)arg2;	// IMP=0x00000000001b6854
- (void)checkAllMediaAccessoriesAndPostNotificationIfNecessary;	// IMP=0x00000000001b660c
- (id)initWithContext:(id)arg1;	// IMP=0x00000000001b6583

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

