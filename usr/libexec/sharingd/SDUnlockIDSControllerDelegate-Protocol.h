//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, SDUnlockIDSController;

@protocol SDUnlockIDSControllerDelegate <NSObject>

@optional
- (void)idsControllerSpaceDidBecomeAvailable:(SDUnlockIDSController *)arg1;
- (void)idsControllerNearbyStateChanged:(SDUnlockIDSController *)arg1;
- (void)idsController:(SDUnlockIDSController *)arg1 didReceiveProtoData:(NSData *)arg2 forType:(unsigned short)arg3 deviceID:(NSString *)arg4;
- (void)idsController:(SDUnlockIDSController *)arg1 didReceiveProtoData:(NSData *)arg2 forType:(unsigned short)arg3;
@end

