//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface IDSDMessageStoreMap : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;	// 8 = 0x8
    NSMutableDictionary *_messageStores;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x004000000033870a
- (void).cxx_destruct;	// IMP=0x0020000000338aee
@property(readonly, copy) NSArray *messageStores;
- (id)getOrCreateMessageStoreForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000338852
- (void)dealloc;	// IMP=0x0010000000338818
- (id)init;	// IMP=0x001000000033875f

@end

