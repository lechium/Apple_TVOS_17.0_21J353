//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class NSDictionary, NSString;

@protocol CLUsageSyncManagerProtocol <CLIntersiloServiceProtocol>
- (void)onStatusBarIconChange:(int)arg1;
- (void)client:(NSString *)arg1 didChangeUsageData:(NSDictionary *)arg2;
@end

