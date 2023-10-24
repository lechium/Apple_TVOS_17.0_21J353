//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSRBSKeepAlive, NSString;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface AMSKeepAlive : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    AMSRBSKeepAlive *_rbsKeepAlive;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    long long _style;	// 40 = 0x28
}

+ (void)_handleAssertionExpiration;	// IMP=0x00600000002b7112
+ (void)_accessAssertionCache:(CDUnknownBlockType)arg1;	// IMP=0x00600000002b6df7
+ (_Bool)_isRBSAssertionsEnabled;	// IMP=0x00600000002b6ddf
+ (void)rbs_keepAliveWithName:(id)arg1 style:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00600000002b68e3
+ (id)rbs_keepAliveWithName:(id)arg1 style:(long long)arg2;	// IMP=0x00600000002b6887
+ (id)rbs_keepAliveWithName:(id)arg1;	// IMP=0x00600000002b683a
+ (void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00600000002b67b7
+ (id)keepAliveWithName:(id)arg1 style:(long long)arg2;	// IMP=0x00600000002b675b
+ (id)keepAliveWithName:(id)arg1;	// IMP=0x00600000002b670e
+ (id)keepAliveWithFormat:(id)arg1;	// IMP=0x00600000002b65ef
- (void).cxx_destruct;	// IMP=0x00000000002b81b3
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_takeProcessAssertion;	// IMP=0x00000000002b7bb9
- (void)_takeOSTransaction;	// IMP=0x00000000002b7b50
- (void)_startLogTimer;	// IMP=0x00000000002b7795
- (void)_removeProcessAssertion;	// IMP=0x00000000002b74f9
- (void)_removeOSTransaction;	// IMP=0x00000000002b7300
- (id)_cacheKey;	// IMP=0x00000000002b7094
- (id)_assertionName;	// IMP=0x00000000002b7022
- (void)rbs_invalidate;	// IMP=0x00000000002b6dc9
- (void)invalidate;	// IMP=0x00000000002b6d72
- (void)dealloc;	// IMP=0x00000000002b6c02
- (id)initRBSWithName:(id)arg1 style:(long long)arg2;	// IMP=0x00000000002b6b76
- (id)initRBSWithName:(id)arg1;	// IMP=0x00000000002b6b62
- (id)initWithName:(id)arg1 style:(long long)arg2;	// IMP=0x00000000002b6910
- (id)initWithName:(id)arg1;	// IMP=0x00000000002b68fc

@end

