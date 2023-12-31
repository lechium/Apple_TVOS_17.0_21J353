//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSXPCConnection;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MGServiceClient : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSDictionary *_queries;	// 24 = 0x18
    NSObject<OS_os_transaction> *_transaction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002a516
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(copy, nonatomic) NSDictionary *queries; // @synthesize queries=_queries;
@property(readonly, retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)enumerateQueriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a341
- (id)outstandingQueryForIdentifier:(id)arg1;	// IMP=0x000000000002a19f
- (void)removeQuery:(id)arg1;	// IMP=0x000000000002a076
- (void)addQuery:(id)arg1;	// IMP=0x0000000000029f44
- (id)description;	// IMP=0x0000000000029c5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029bfa
- (unsigned long long)hash;	// IMP=0x0000000000029bb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029afc
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000029a7c

@end

