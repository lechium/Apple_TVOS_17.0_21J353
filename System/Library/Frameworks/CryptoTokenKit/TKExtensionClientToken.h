//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TKClientToken.h"

@class NSNumber, NSXPCConnection, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface TKExtensionClientToken : TKClientToken
{
    NSXPCListenerEndpoint *_serverEndpoint;	// 8 = 0x8
    NSXPCConnection *_serverConnection;	// 16 = 0x10
    _Bool _namedConnection;	// 24 = 0x18
    NSNumber *_targetUID;	// 32 = 0x20
    long long _connectionIdentifier;	// 40 = 0x28
    NSXPCConnection *_tokenConnection;	// 48 = 0x30
}

+ (id)builtinTokenIDs;	// IMP=0x0060000000030ac6
- (void).cxx_destruct;	// IMP=0x00000000000325af
@property(readonly, nonatomic) NSXPCConnection *tokenConnection; // @synthesize tokenConnection=_tokenConnection;
- (void)dealloc;	// IMP=0x0000000000032535
- (id)withError:(id *)arg1 invoke:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031de6
- (_Bool)ensureConnectionWithError:(id *)arg1;	// IMP=0x0000000000031545
- (id)SEPKeyEndpoint;	// IMP=0x00000000000313a9
- (id)watcherEndpoint;	// IMP=0x000000000003120d
- (id)configurationEndpoint;	// IMP=0x0000000000031071
- (id)endpoint;	// IMP=0x0000000000030eb0
@property(readonly, nonatomic) NSXPCConnection *serverConnection;
- (id)initWithTokenID:(id)arg1 serverEndpoint:(id)arg2 targetUID:(id)arg3;	// IMP=0x0000000000030ad3

@end
