//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class MTRReadParams, MTRSubscribeParams, NSArray, NSNumber, NSString;

@interface NSDictionary (HMMTRRemoteMessageDictionary)
@property(readonly, copy) NSArray *CHIPRemoteResults;
@property(readonly, copy) NSString *CHIPRemoteCommand;
@property(readonly, copy) MTRSubscribeParams *CHIPSubscribeParams;
@property(readonly, copy) MTRReadParams *CHIPReadParams;
@property(readonly, copy) NSNumber *CHIPTimedInvokeTimeout;
@property(readonly, copy) NSNumber *CHIPTimedWriteTimeout;
@property(readonly, copy) NSNumber *CHIPMaxInterval;
@property(readonly, copy) NSNumber *CHIPMinInterval;
@property(readonly, copy) id CHIPCommandFields;
@property(readonly, copy) id CHIPData;
@property(readonly, copy) NSNumber *CHIPCommandID;
@property(readonly, copy) NSNumber *CHIPAttributeID;
@property(readonly, copy) NSNumber *CHIPClusterID;
@property(readonly, copy) NSNumber *CHIPEndpointID;
@end

