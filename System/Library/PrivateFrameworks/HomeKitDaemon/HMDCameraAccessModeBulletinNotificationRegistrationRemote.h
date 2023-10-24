//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBulletinNotificationRegistrationSource, HMDCameraAccessModeBulletinNotificationRegistration;

__attribute__((visibility("hidden")))
@interface HMDCameraAccessModeBulletinNotificationRegistrationRemote : HMFObject
{
    HMDCameraAccessModeBulletinNotificationRegistration *_registration;	// 8 = 0x8
    HMDBulletinNotificationRegistrationSource *_source;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000218657
- (void).cxx_destruct;	// IMP=0x0000000000218626
@property(readonly, copy) HMDBulletinNotificationRegistrationSource *source; // @synthesize source=_source;
@property(readonly, copy) HMDCameraAccessModeBulletinNotificationRegistration *registration; // @synthesize registration=_registration;
- (id)attributeDescriptions;	// IMP=0x00000000002184dc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021828b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002181dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002181d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000218087
- (id)initWithCameraAccessModeBulletinNotificationRegistration:(id)arg1 source:(id)arg2;	// IMP=0x0000000000217fc3

@end
