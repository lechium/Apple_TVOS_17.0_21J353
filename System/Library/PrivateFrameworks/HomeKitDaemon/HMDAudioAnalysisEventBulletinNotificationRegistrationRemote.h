//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAudioAnalysisEventBulletinNotificationRegistration, HMDBulletinNotificationRegistrationSource;

__attribute__((visibility("hidden")))
@interface HMDAudioAnalysisEventBulletinNotificationRegistrationRemote : HMFObject
{
    HMDAudioAnalysisEventBulletinNotificationRegistration *_registration;	// 8 = 0x8
    HMDBulletinNotificationRegistrationSource *_source;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007f586e
@property(readonly, copy) HMDBulletinNotificationRegistrationSource *source; // @synthesize source=_source;
@property(readonly, copy) HMDAudioAnalysisEventBulletinNotificationRegistration *registration; // @synthesize registration=_registration;
- (id)attributeDescriptions;	// IMP=0x00000000007f5724
- (id)initWithAudioAnalysisEventBulletinNotificationRegistration:(id)arg1 source:(id)arg2;	// IMP=0x00000000007f5682

@end

