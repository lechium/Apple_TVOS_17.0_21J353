//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloProxyDelegateProtocol-Protocol.h"

@class CLSilo, NSArray;
@protocol CLIntersiloProxyDelegateProtocol;

@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
+ (void)performSyncOnSilo:(CLSilo *)arg1 invoker:(void (^)(void))arg2;
+ (void)becameFatallyBlocked:(NSArray *)arg1 index:(unsigned long long)arg2;
+ (CLSilo *)getSilo;
+ (_Bool)isSupported;

@optional
- (void)setDelegateEntityName:(const char *)arg1;
- (void)registerDelegate:(id <CLIntersiloProxyDelegateProtocol>)arg1 inSilo:(CLSilo *)arg2;
- (void)endService;
- (void)beginService;
@end

