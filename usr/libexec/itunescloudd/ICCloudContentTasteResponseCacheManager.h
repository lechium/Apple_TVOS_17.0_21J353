//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ICCloudContentTasteResponseCacheManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSString *_mediaContentTasteCacheDirectoryPath;	// 16 = 0x10
}

+ (id)sharedCloudContentTasteResponseCacheManager;	// IMP=0x00400000000b92c7
- (void).cxx_destruct;	// IMP=0x00200000000b8a3a
- (id)_prepareCachedResponseFromArchiveAtPath:(id)arg1;	// IMP=0x00100000000b87a2
- (id)_prepareArchiveWithContentTasteReponse:(id)arg1;	// IMP=0x00100000000b8658
- (id)_mediaContentTasteCacheFilePathForAccount:(id)arg1;	// IMP=0x00100000000b845d
- (void)removeCachedContentTasteResponseForConnectionConfiguration:(id)arg1;	// IMP=0x00100000000b83cf
- (void)removeAllCachedContentTasteResponses;	// IMP=0x00100000000b8384
- (_Bool)setCachedContentTasteUpdateResponse:(id)arg1 forConnectionConfiguration:(id)arg2;	// IMP=0x00100000000b827e
- (id)getCachedContentTasteResponseForConnectionConfiguration:(id)arg1;	// IMP=0x00100000000b8180
- (id)_init;	// IMP=0x00100000000b80f1
- (id)init;	// IMP=0x00100000000b80af

@end
