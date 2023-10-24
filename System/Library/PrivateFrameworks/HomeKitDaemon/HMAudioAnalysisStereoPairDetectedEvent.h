//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAudioAnalysisEventBulletin, HMDAppleMediaAccessory, NSUUID;

__attribute__((visibility("hidden")))
@interface HMAudioAnalysisStereoPairDetectedEvent : NSObject
{
    HMAudioAnalysisEventBulletin *_event;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    NSUUID *_notificationUUID;	// 24 = 0x18
    HMDAppleMediaAccessory *_accessory;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000be84a6
@property(copy) HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
@property(copy) NSUUID *notificationUUID; // @synthesize notificationUUID=_notificationUUID;
@property unsigned long long state; // @synthesize state=_state;
@property(copy) HMAudioAnalysisEventBulletin *event; // @synthesize event=_event;
- (id)initWithEventBulletin:(id)arg1 accessory:(id)arg2 notificationUUID:(id)arg3;	// IMP=0x0000000000be8371

@end
