//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnounceDaemon/NSObject-Protocol.h>

@class HMAccessory, HMHome, NSArray, NSObject;
@protocol DICHomeManagerDelegate, OS_dispatch_queue;

@protocol DICHomeManagerProviding <NSObject>
@property(readonly, nonatomic) NSArray *allHomes;
@property(readonly, nonatomic) _Bool homesLoaded;
@property(readonly, nonatomic) HMHome *currentHome;
@property(readonly, nonatomic) HMAccessory *currentAccessory;
- (void)addDelegate:(id <DICHomeManagerDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)loadHomeSynchronous;
- (void)loadHomes:(void (^)(NSArray *))arg1;
@end
