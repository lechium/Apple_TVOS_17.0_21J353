//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAccessoryDataStreamAdapter, NSDictionary;

@protocol HMDAccessoryDataStreamAdapterDelegate <NSObject>
- (void)dataStreamAdapterDidFailDataRead:(HMDAccessoryDataStreamAdapter *)arg1;
- (void)dataStreamAdapterDidCompleteDataRead:(HMDAccessoryDataStreamAdapter *)arg1;
- (_Bool)dataStreamAdapter:(HMDAccessoryDataStreamAdapter *)arg1 didReceiveData:(NSDictionary *)arg2;
@end

