//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSAnisette : NSObject
{
}

+ (id)bagKeySet;	// IMP=0x00100000001c6ab2
+ (_Bool)_shouldRetryAfterError:(id)arg1;	// IMP=0x00100000001c6a61
+ (id)_syncMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;	// IMP=0x00100000001c6716
+ (id)_provisionMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;	// IMP=0x00100000001c63d2
+ (id)_headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3;	// IMP=0x00100000001c63ca
+ (id)_handleActionName:(id)arg1 actionData:(id)arg2 account:(id)arg3 type:(long long)arg4 bag:(id)arg5;	// IMP=0x00100000001c613d
+ (id)_eraseProvisioningForType:(long long)arg1 account:(id)arg2;	// IMP=0x00100000001c6135
+ (void)_bagDomainExistsForURL:(id)arg1 type:(long long)arg2 bag:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c5d39
+ (unsigned long long)_accountIDForType:(long long)arg1 account:(id)arg2;	// IMP=0x00100000001c5d31
+ (id)createBagForSubProfile;	// IMP=0x00100000001c5c97
+ (id)bagSubProfileVersion;	// IMP=0x00100000001c5c47
+ (id)bagSubProfile;	// IMP=0x00100000001c5bf7
+ (id)headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4;	// IMP=0x00100000001c5b91
+ (id)handleResponse:(id)arg1 type:(long long)arg2 bag:(id)arg3 account:(id)arg4;	// IMP=0x00100000001c597e
+ (_Bool)handleResponse:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4;	// IMP=0x00100000001c5929

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
