//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMFFlow, MTRAttributeReport, MTREventReport, NSDictionary;

@protocol HMMTRHMDHAPAccessoryDelegate <NSObject>
- (void)handleAttributeReport:(MTRAttributeReport *)arg1 dictionary:(NSDictionary *)arg2;
- (void)handleEventReport:(MTREventReport *)arg1 dictionary:(NSDictionary *)arg2 flow:(HMFFlow *)arg3;
@end

