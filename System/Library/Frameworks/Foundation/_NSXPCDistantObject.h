//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCDistantObject : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSXPCInterface *_remoteInterface;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
    CDUnknownBlockType _errorBlock;	// 32 = 0x20
    unsigned long long _proxyNumber;	// 40 = 0x28
    unsigned long long _generationCount;	// 48 = 0x30
    unsigned long long _flags;	// 56 = 0x38
    double _timeout;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000812945
@property(copy) NSDictionary *_userInfo; // @synthesize _userInfo;
@property(readonly, retain) NSXPCConnection *_connection; // @synthesize _connection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000813008
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000812f90
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000812f13
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000812eb0
- (id)_unboostingRemoteObjectProxy;	// IMP=0x0000000000812e58
- (id)remoteObjectProxy;	// IMP=0x0000000000812df9
- (void)_forwardStackInvocation:(id)arg1;	// IMP=0x0000000000812dcc
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000812d9f
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000812d1b
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000812ca7
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000812c0e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000812b0d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000081294d
- (void)dealloc;	// IMP=0x00000000008128ae
- (id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3;	// IMP=0x0000000000812848
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 options:(unsigned long long)arg5 error:(CDUnknownBlockType)arg6;	// IMP=0x0000000000812793

@end

