//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVXPCClient;

@interface KVDonateXPCClient : NSObject
{
    KVXPCClient *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000020944
- (oneway void)openDatasetStream:(unsigned long long)arg1 validity:(id)arg2 itemType:(long long)arg3 originAppId:(id)arg4 deviceId:(id)arg5 userId:(id)arg6 options:(unsigned short)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000020818
- (oneway void)closeDatasetStream:(CDUnknownBlockType)arg1;	// IMP=0x000000000002077d
- (void)removeItemId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000206dc
- (void)addItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002063b
- (oneway void)abortDatasetStream;	// IMP=0x000000000002061a
- (void)terminate;	// IMP=0x0000000000020600
- (id)initWithClientId:(id)arg1;	// IMP=0x0000000000020563

@end

