//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@protocol CLOutdoorServiceClientProtocol;

@protocol CLOutdoorServiceProtocol <CLIntersiloServiceProtocol>
- (void)unregisterForUpdates:(byref id <CLOutdoorServiceClientProtocol>)arg1;
- (void)registerForUpdates:(byref id <CLOutdoorServiceClientProtocol>)arg1;
@end

