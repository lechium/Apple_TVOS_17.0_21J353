//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ICFPStreamContext : NSObject
{
    unsigned long long _accountID;	// 8 = 0x8
    NSData *_playerInfoContextRequestData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000efb31
@property(readonly, copy, nonatomic) NSData *playerInfoContextRequestData; // @synthesize playerInfoContextRequestData=_playerInfoContextRequestData;
@property(readonly, nonatomic) unsigned long long accountID; // @synthesize accountID=_accountID;
- (_Bool)getStreamerInfoContextDataUsingPlayerInfoContextData:(id)arg1 returningData:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000000efaab
- (_Bool)getPlayerDelegateInfoDataUsingPlayerDelegateInfoResponseData:(id)arg1 returningData:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000000efa39
- (void)dealloc;	// IMP=0x00000000000efa0a
- (id)initWithVersion:(unsigned int)arg1 contextID:(unsigned int)arg2 contentInfo:(id)arg3 returningError:(id *)arg4;	// IMP=0x00000000000ef9b0

@end

