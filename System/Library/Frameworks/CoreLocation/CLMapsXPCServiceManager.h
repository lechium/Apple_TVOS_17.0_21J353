//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLMapsXPCServiceManager : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000062077
+ (id)sharedInstance;	// IMP=0x0060000000061e24
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)clearMemoryAndExitHelperProcessCleanly;	// IMP=0x000000000006325a
- (void)collectMapDataOfType:(long long)arg1 aroundCoordinate:(struct CLLocationCoordinate2D)arg2 inRadius:(double)arg3 allowNetwork:(_Bool)arg4 WithReply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000062552
- (void)dealloc;	// IMP=0x0000000000062375
- (void)createConnection;	// IMP=0x000000000006209b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000062092

@end
