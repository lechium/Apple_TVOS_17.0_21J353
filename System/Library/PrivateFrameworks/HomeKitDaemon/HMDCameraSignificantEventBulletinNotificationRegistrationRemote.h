//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBulletinNotificationRegistrationSource, HMDCameraSignificantEventBulletinNotificationRegistration;

__attribute__((visibility("hidden")))
@interface HMDCameraSignificantEventBulletinNotificationRegistrationRemote : HMFObject
{
    HMDCameraSignificantEventBulletinNotificationRegistration *_registration;	// 8 = 0x8
    HMDBulletinNotificationRegistrationSource *_source;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008188e7
- (void).cxx_destruct;	// IMP=0x00000000008188b6
@property(readonly, copy) HMDBulletinNotificationRegistrationSource *source; // @synthesize source=_source;
@property(readonly, copy) HMDCameraSignificantEventBulletinNotificationRegistration *registration; // @synthesize registration=_registration;
- (id)attributeDescriptions;	// IMP=0x000000000081876c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000081851b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000081846d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000818462
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000818317
- (id)initWithCameraCameraSignificantEventBulletinNotificationRegistration:(id)arg1 source:(id)arg2;	// IMP=0x0000000000818253

@end

