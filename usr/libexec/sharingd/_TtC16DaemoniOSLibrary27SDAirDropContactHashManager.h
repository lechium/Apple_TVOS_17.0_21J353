//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16DaemoniOSLibrary27SDAirDropContactHashManager : NSObject
{
    MISSING_TYPE *context;	// 8 = 0x8
    MISSING_TYPE *contactUpdateCoalescer;	// 104 = 0x68
    MISSING_TYPE *meCardUpdateCoalescer;	// 112 = 0x70
    MISSING_TYPE *systemMonitor;	// 120 = 0x78
    MISSING_TYPE *hashManagerQ;	// 128 = 0x80
    MISSING_TYPE *bucket;	// 136 = 0x88
    MISSING_TYPE *contactStore;	// 144 = 0x90
    MISSING_TYPE *hashDB;	// 184 = 0xb8
    MISSING_TYPE *notificationCenter;	// 200 = 0xc8
    MISSING_TYPE *distributedNotificationCenter;	// 208 = 0xd0
    MISSING_TYPE *activated;	// 216 = 0xd8
    MISSING_TYPE *meCardInfo;	// 224 = 0xe0
    MISSING_TYPE *hashesUpdatedSuccessfully;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00400000002fa410
- (void)meCardDidChange;	// IMP=0x00100000002f2f10
- (void)contactStoreDidChange;	// IMP=0x00100000002f2c40
- (void)cmfSyncAgentBlockListDidChange;	// IMP=0x00100000002f2bf0
- (id)init;	// IMP=0x00100000002f0a80

@end

