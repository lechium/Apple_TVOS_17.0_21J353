//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDevicePolicyController : NSObject
{
    NSMutableDictionary *_devices;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000004307a8
- (void).cxx_destruct;	// IMP=0x0020000000430fe4
- (_Bool)shouldBlackOutDeviceWithCbuuid:(id)arg1;	// IMP=0x0010000000430b8c
- (void)endFairplayAuthenticationForDeviceWithCbuuid:(id)arg1;	// IMP=0x0010000000430b0c
- (void)startFairplayAuthenticationForDeviceWithCbuuid:(id)arg1;	// IMP=0x001000000043085a
- (id)init;	// IMP=0x00100000004307fd

@end

