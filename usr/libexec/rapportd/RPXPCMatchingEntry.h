//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, RPServer;

@interface RPXPCMatchingEntry : NSObject
{
    _Bool _appSignIn;	// 8 = 0x8
    _Bool _state;	// 9 = 0x9
    NSDictionary *_event;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
    RPServer *_server;	// 32 = 0x20
    unsigned long long _token;	// 40 = 0x28
    NSString *_serviceType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000004795c
@property(nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) unsigned long long token; // @synthesize token=_token;
@property(nonatomic) _Bool state; // @synthesize state=_state;
@property(retain, nonatomic) RPServer *server; // @synthesize server=_server;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSDictionary *event; // @synthesize event=_event;
@property(nonatomic) _Bool appSignIn; // @synthesize appSignIn=_appSignIn;

@end

