//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AMSXDMessage;

@protocol AMSDeviceMessengerClientInterface <NSObject>
- (void)deviceMessengerDidUpdateDevices;
- (void)deviceMessengerDidClearMessage:(AMSXDMessage *)arg1;
- (void)deviceMessengerDidReceiveReply:(AMSXDMessage *)arg1;
- (void)deviceMessengerDidReceiveMessage:(AMSXDMessage *)arg1;
@end

