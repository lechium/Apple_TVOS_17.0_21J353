//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDFaceTimeInviteDemuxer : NSObject
{
    MISSING_TYPE *featureFlags;	// 8 = 0x8
    MISSING_TYPE *queue;	// 16 = 0x10
    MISSING_TYPE *idsQueryController;	// 24 = 0x18
    MISSING_TYPE *serverBag;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_supportsConversationOneToOneModeEnabled;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_pushTokenForSelf;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00400000002b5d39
- (_Bool)destinationIDsCanUseV2Blobs:(id)arg1;	// IMP=0x00100000002b4de2
- (void)idsPeersForHandle:(id)arg1 video:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002b4cfd
- (id)init;	// IMP=0x00100000002b35d4

@end
