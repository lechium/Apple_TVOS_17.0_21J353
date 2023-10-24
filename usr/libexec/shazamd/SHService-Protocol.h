//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SHServiceDelegate;

@protocol SHService <NSObject>
+ (void)initializeGlobalServiceState;
+ (NSString *)machServiceName;
@property(nonatomic) __weak id <SHServiceDelegate> serviceDelegate;
- (void)stop;
@end

