//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADSyncVerificationHelper : NSObject
{
    NSMutableDictionary *_checksums;	// 8 = 0x8
    NSMutableDictionary *_idCRCChecksums;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002a6f04
- (id)checksums;	// IMP=0x00100000002a6bff
- (void)handleSyncChunkInfo:(id)arg1 withSyncInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002a6164
- (id)_groupKeyForSyncInfo:(id)arg1 domainObject:(id)arg2;	// IMP=0x00100000002a5fd6
- (id)init;	// IMP=0x00100000002a5f61

@end
