//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface GSSHelperPeer : NSObject
{
    unsigned int session;	// 8 = 0x8
    NSObject<OS_xpc_object> *conn;	// 16 = 0x10
    NSString *bundleIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000178e0
@property(nonatomic) unsigned int session; // @synthesize session;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier;
@property(retain, nonatomic) NSObject<OS_xpc_object> *conn; // @synthesize conn;

@end

